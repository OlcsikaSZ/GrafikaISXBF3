# 🌌 Naprendszer Szimuláció (Kezdeti Verzió)

## 🚀 Bevezetés

Ez a projekt egy **C nyelven** írt *3D-s alkalmazás*, amely a Naprendszer modelljének megjelenítését célozza meg. A cél egy interaktív szimuláció létrehozása, ahol a felhasználó megfigyelheti a bolygók mozgását és a Naprendszer dinamikáját.

---

## ✨ Fő Funkciók

- 🌍 **A Föld forgása** saját tengelye körül és keringése a Nap körül.
- 🌕 **A Hold** pályán mozog a Föld körül.
- ☀️ **A Nap forgatható**, és központi világító objektumként szolgál.
- 🚀 **Űrhajó vezérlés**: egy billentyű lenyomásával irányítható űrhajó indul.
- 🎥 **Kamera vezérlés**: forgatás, zoom, mozgás – teljes interaktivitás.
- 💡 **Állítható fényerő**: a megvilágítás intenzitása dinamikusan szabályozható.

---

## 📂 Mappa Struktúra

```
📁 src/         - Forráskódok
    📜 main.c    - A főprogram.
    📜 camera.c  - A kamera kezeléséért felelős modul.
    📜 draw.c    - A Naprendszer objektumainak kirajzolását végző kód.
    📜 model.c   - A bolygók és egyéb egységek modellezése.
📁 include/     - Fejlécfájlok.
📁 textures/    - Bolygókhoz használt textúrák.
📁 objects/     - 3D modellek tárolása.
```

---

## 🛠️ Jövőbeli Fejlesztési Tervek

- ✅ **Bolygók kiegészítése** – Minden égitest beillesztése.
- ✅ **Pályaszámítások fejlesztése** – Reálisabb bolygómozgások.
- ✅ **Grafikai fejlesztések** – Fényhatások, részletesebb textúrák.
- ✅ **Interaktivitás növelése** – Kamera mozgatása, zoom, információs panelek.

---

## 🏗️ Fordítás és Futtatás

A program fordítása és futtatása:

```bash
make
./program_neve
```

🔹 *Megjegyzés*: A projekt valószínűleg egy fordítási rendszert (pl. Makefile) használ.

---

## 💻 Rendszerkövetelmények

- ✔️ **C fordító** (pl. GCC)
- ✔️ **OpenGL** vagy egyéb grafikai könyvtár (ha szükséges)

---

## 📜 Szerzői Jogok és Licenc

- 🔹 A projekt *fejlesztési fázisban van*.
- 🔹 A végleges licencfeltételek még nincsenek meghatározva.

📩 *Ha érdeklődsz a projekt iránt, lépj kapcsolatba a fejlesztővel!*
