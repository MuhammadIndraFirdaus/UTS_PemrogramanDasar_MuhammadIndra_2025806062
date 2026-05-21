# Python/soal2_game_guess/game.py
import random

LEVELS = {
    1: {"max": 10,  "tries": 3},
    2: {"max": 50,  "tries": 5},
    3: {"max": 100, "tries": 7},
}

def main_game(player_name, level):
    """Jalankan satu level. Return skor atau 0 jika kalah."""
    cfg = LEVELS[level]
    angka = random.randint(1, cfg["max"])
    sisa  = cfg["tries"]

    print(f"\n[Level {level}] Tebak angka 1–{cfg['max']} | {sisa} percobaan")

    while sisa > 0:
        try:
            tebak = int(input("Tebakan: "))
        except ValueError:
            print("Masukkan angka!")
            continue

        if tebak == angka:
            skor = sisa * 10 * level
            print(f"✅ Benar! Skor: +{skor}")
            return skor
        elif tebak < angka:
            print(f"⬆  Terlalu kecil! Sisa: {sisa-1}")
        else:
            print(f"⬇  Terlalu besar! Sisa: {sisa-1}")
        sisa -= 1

    print(f"❌ Kalah. Jawabannya: {angka}")
    return 0