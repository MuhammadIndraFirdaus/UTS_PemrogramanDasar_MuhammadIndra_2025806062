# Python/soal2_game_guess/main.py
from game import main_game
from scoreboard import perbarui_skor, tampilkan_top5

try:
    from colorama import init, Fore, Style
    init()
    def warna(teks, c): return c + teks + Style.RESET_ALL
except ImportError:
    def warna(teks, c): return teks
    class Fore:
        CYAN = YELLOW = GREEN = ""

nama = input("Masukkan nama pemain: ").strip() or "Anonim"
total = 0

for level in [1, 2, 3]:
    print(warna(f"\n▶ Level {level}", Fore.CYAN))
    skor = main_game(nama, level)
    total += skor

total_baru = perbarui_skor(nama, total)
print(warna(f"\n🎮 Selesai! Total skor kamu: {total_baru} pts", Fore.YELLOW))
tampilkan_top5()