🔍 Soal 3 – Analisis Teks Otomatis (Python)
📄 utils.py
File utilitas yang berisi fungsi-fungsi pembantu. Terdapat fungsi untuk membaca file teks, membersihkan dan mengekstrak kata menggunakan regex, menghitung jumlah huruf vokal dan konsonan, serta membuat grafik frekuensi kata dalam format ASCII. File ini dirancang modular agar bisa digunakan ulang oleh file lain tanpa perlu menulis ulang logikanya.
📄 analyzer.py
File inti yang mengintegrasikan semua fungsi dari utils.py untuk menghasilkan laporan lengkap. Membaca input.txt, menghitung jumlah baris, jumlah kata, frekuensi tiap kata menggunakan Counter, serta jumlah huruf vokal dan konsonan. Hasil analisis dicetak ke terminal sekaligus disimpan ke file report.txt secara otomatis.
📄 main.py
File utama yang cukup singkat, hanya memanggil fungsi analisis() dari analyzer.py dengan menentukan file input dan output. Desain ini mengikuti prinsip pemisahan tanggung jawab sehingga jika ingin mengganti file input cukup ubah di main.py tanpa menyentuh logika analisis.

▶️ Cara Running
# 1. Masuk ke folder soal 3
cd C:\Users\Lenovo\UTS_PemrogramanDasar_MuhammadIndra_2025806062\Python\soal3_text_analyzer

# 2. Pastikan file input.txt sudah ada, jika belum buat dulu
# Buka notepad dan isi dengan teks apapun, simpan sebagai input.txt
# Atau lewat PowerShell:
echo "python adalah bahasa pemrograman. belajar python itu menyenangkan." > input.txt

# 3. Jalankan program
python main.py

# 4. Output akan muncul di terminal dan tersimpan di report.txt
=== LAPORAN ANALISIS TEKS ===
Jumlah baris  : 3
Jumlah kata   : 13
Huruf vokal   : 42
Huruf konsonan: 35

=== 5 KATA TERBANYAK ===
python          ###  (3)
belajar         ##   (2)
program         #    (1)

# 5. Cek hasil file report.txt
Get-Content report.txt