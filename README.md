Naprendszer Szimuláció (Kezdeti Verzió)

Bevezetés

Ez a projekt egy C nyelven írt 3D-s alkalmazás, amely a Naprendszer modelljének megjelenítését célozza meg. A cél egy interaktív szimuláció létrehozása, ahol a felhasználó megfigyelheti a bolygók mozgását és a Naprendszer dinamikáját.

Mappa Struktúra
    src/ - A forráskódok helye.
        main.c - A főprogram.
        camera.c - A kamera kezelésével kapcsolatos funkciók.
        draw.c - A Naprendszer objektumainak kirajzolását végző modul.
        model.c - A bolygók és egyéb egységek modellezése.
    include/ - Fejlécfájlokat tartalmaz.
    textures/ - A bolygókhoz használt textúrák.
    objects/ - 3D modellek tárolására szolgál.

Jövőbeli Fejlesztési Tervek
    Bolygók kiegészítése: Jelenleg még hiányoznak bizonyos bolygók, ezeket be kell illeszteni.

    Pályaszámítások fejlesztése: A bolygók mozgásának realisztikusabb modellezése.

    Grafikai javítások: Részletesebb textúrák és fényhatások hozzáadása.

    Felhasználói interakció: Kamera mozgatása, nagyítás, esetleg információs panelekkel.

Fordítás és Futtatás
A projekt egy fordítási rendszert használ (pl. Makefile). A program lefordításához és futtatásához az alábbi parancsokat használd:
    make
    ./program_neve

Rendszerkövetelmények
    C fordító (pl. GCC)
    OpenGL vagy egyéb grafikai könyvtár (ha szükséges)

Szerzői Jogok és Licenc
    A projekt jelenleg fejlesztési fázisban van. A végleges licencelési feltételek még nem lettek meghatározva.

