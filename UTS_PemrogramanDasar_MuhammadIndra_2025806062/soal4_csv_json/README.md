🔄 Soal 4 – Konversi Data CSV ↔ JSON
📄 convert_csv_json.c (C)
Program C yang membaca file data_mahasiswa.csv hasil dari Soal 1 menggunakan fungsi fopen() dan sscanf(). Data dibaca baris per baris, diparsing ke dalam array struct, lalu ditampilkan dalam format tabel rapi di terminal beserta rata-rata nilai akhir. Setelah itu data diekspor ke file data_mahasiswa.json secara manual menggunakan fprintf() mengikuti format JSON standar.
📄 convert.py (Python)
Program Python yang melakukan hal serupa namun menggunakan library bawaan csv dan json sehingga kodenya jauh lebih ringkas. Membaca data_mahasiswa.csv, menampilkan data dalam format tabel, menghitung rata-rata nilai akhir seluruh mahasiswa, lalu menyimpan hasilnya ke data_mahasiswa.json dengan format yang rapi menggunakan json.dump().

▶️ Cara Running – Versi C
# 1. Pastikan data_mahasiswa.csv sudah ada (hasil dari Soal 1)
# Salin CSV dari Soal 1
copy C:\Users\Lenovo\UTS_PemrogramanDasar_MuhammadIndra_2025806062\C\soal1_data_mahasiswa\data_mahasiswa.csv C:\Users\Lenovo\UTS_PemrogramanDasar_MuhammadIndra_2025806062\C\soal4_csv_json\

# 2. Masuk ke folder soal 4 C
cd C:\Users\Lenovo\UTS_PemrogramanDasar_MuhammadIndra_2025806062\C\soal4_csv_json

# 3. Compile
gcc convert_csv_json.c -o convert.exe

# 4. Jalankan
.\convert.exe

# 5. Output yang muncul
Berhasil membaca 2 data mahasiswa.

Nama                 NIM          NilaiAkhir  Mutu
--------------------------------------------------
Muhammad Indra       2025806062        85.50     A

Rata-rata nilai akhir: 85.50
File JSON disimpan ke data_mahasiswa.json