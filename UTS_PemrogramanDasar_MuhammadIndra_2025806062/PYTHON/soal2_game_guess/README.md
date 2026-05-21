🎮 Soal 2 – Game Guess Battle (Python)
📄 game.py
File yang berisi logika inti permainan. Mendefinisikan 3 level dengan tingkat kesulitan berbeda — Level 1 menebak angka 1–10 dengan 3 percobaan, Level 2 menebak 1–50 dengan 5 percobaan, dan Level 3 menebak 1–100 dengan 7 percobaan. Angka dibangkitkan secara acak menggunakan modul random. Skor dihitung berdasarkan sisa percobaan dikali 10 dikali nomor level, sehingga semakin cepat menebak semakin tinggi skor yang didapat.
📄 scoreboard.py
File yang mengelola sistem penyimpanan dan pembacaan skor pemain. Data skor disimpan dalam format JSON di file scores.json menggunakan dictionary dengan nama pemain sebagai key dan total skor sebagai value. Terdapat fungsi untuk memuat skor, menyimpan skor, memperbarui skor pemain, dan menampilkan 5 pemain dengan skor tertinggi. File ini juga menangani kondisi ketika file JSON belum ada atau masih kosong.
📄 main.py
File utama yang mengintegrasikan semua modul. Program meminta nama pemain di awal, kemudian menjalankan game level 1 sampai 3 secara berurutan. Setelah semua level selesai, total skor dijumlahkan, disimpan ke scores.json, dan ditampilkan leaderboard top 5. Menggunakan library colorama untuk memberikan warna pada teks di terminal agar tampilan lebih menarik.

▶️ Cara Running
# 1. Masuk ke folder soal 2
cd C:\Users\Lenovo\UTS_PemrogramanDasar_MuhammadIndra_2025806062\Python\soal2_game_guess

# 2. Install library colorama (hanya perlu sekali)
pip install colorama

# 3. Jalankan program
python main.py

# 4. Ikuti instruksi yang muncul
Masukkan nama pemain: Muhammad Indra

▶ Level 1 → tebak angka 1–10, 3 percobaan
▶ Level 2 → tebak angka 1–50, 5 percobaan
▶ Level 3 → tebak angka 1–100, 7 percobaan

# 5. Setelah selesai akan muncul
=== TOP 5 SCORE ===
1. Muhammad Indra – 230 pts