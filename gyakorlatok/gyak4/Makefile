CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
LDFLAGS = -lSDL2 -lGL

SRCS = main.c ball.c paddle.c game.c
OBJS = $(SRCS:.c=.o)

all: pong

pong: $(OBJS)
	$(CC) $(CFLAGS) -o pong $(OBJS) $(LDFLAGS)

main.o: main.c ball.h paddle.h game.h
	$(CC) $(CFLAGS) -c main.c

ball.o: ball.c ball.h game.h
	$(CC) $(CFLAGS) -c ball.c

paddle.o: paddle.c paddle.h
	$(CC) $(CFLAGS) -c paddle.c

game.o: game.c game.h
	$(CC) $(CFLAGS) -c game.c

clean:
	rm -f pong $(OBJS)
