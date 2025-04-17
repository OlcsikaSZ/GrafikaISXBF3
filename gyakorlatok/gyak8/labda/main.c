#include <SDL2/SDL.h>
#include <stdbool.h>
#include <math.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define GRAVITY 1000.0f // pixel/sec^2
#define BALL_RADIUS 20

typedef struct {
    float x, y;
    float vy;
    bool ideal;
} Ball;

void reset_ball(Ball* ball) {
    ball->x = WINDOW_WIDTH / 2;
    ball->y = BALL_RADIUS;
    ball->vy = 0;
}

void draw_circle(SDL_Renderer* renderer, int32_t centreX, int32_t centreY, int32_t radius) {
    for (int w = 0; w < radius * 2; w++) {
        for (int h = 0; h < radius * 2; h++) {
            int dx = radius - w;
            int dy = radius - h;
            if ((dx*dx + dy*dy) <= (radius * radius)) {
                SDL_RenderDrawPoint(renderer, centreX + dx, centreY + dy);
            }
        }
    }
}

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Pattogó labda", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool running = true;
    SDL_Event event;

    Ball ball = {0};
    reset_ball(&ball);
    ball.ideal = false; // <-- ide állítsd: true = ideális, false = nem ideális

    Uint32 last_time = SDL_GetTicks();

    while (running) {
        // Idő delta számítás
        Uint32 now = SDL_GetTicks();
        float dt = (now - last_time) / 1000.0f;
        last_time = now;

        // Eseménykezelés
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                running = false;

            // Szóközre váltás ideális és nem ideális mód között
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_SPACE) {
                ball.ideal = !ball.ideal;
                reset_ball(&ball);
            }
        }

        // Gravitációs gyorsulás
        ball.vy += GRAVITY * dt;
        ball.y += ball.vy * dt;

        float floor_y = WINDOW_HEIGHT - BALL_RADIUS;

        // Ütközés
        if (ball.y >= floor_y) {
            ball.y = floor_y;
            if (ball.ideal) {
                ball.vy = -sqrtf(2 * GRAVITY * (floor_y - BALL_RADIUS));
            } else {
                ball.vy = -ball.vy * 0.7f; // csillapítás
                if (fabs(ball.vy) < 30.0f) {
                    ball.vy = 0;
                }
            }
        }

        // Rajzolás
        SDL_SetRenderDrawColor(renderer, 255, 100, 100, 255);
        draw_circle(renderer, (int)ball.x, (int)ball.y, BALL_RADIUS);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 100, 100, 255);
        SDL_Rect ball_rect = {
            (int)(ball.x - BALL_RADIUS),
            (int)(ball.y - BALL_RADIUS),
            BALL_RADIUS * 2,
            BALL_RADIUS * 2
        };
        SDL_RenderFillRect(renderer, &ball_rect);

        // Info szöveg megjelenítéséhez szükség lenne SDL_ttf-re, de most csak kommentbe írjuk:
        // "Space: ideális / nem ideális váltás"

        SDL_RenderPresent(renderer);
        SDL_Delay(16);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}