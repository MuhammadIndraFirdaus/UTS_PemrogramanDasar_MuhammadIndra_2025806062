🧩 Soal 1 – Sistem Data Mahasiswa (C)
📄 linked_list.h
File header yang berfungsi sebagai blueprint program. Mendefinisikan struktur data Mahasiswa yang memiliki atribut nama, NIM, nilai tugas, UTS, UAS, nilai akhir, huruf mutu, dan pointer next. Pointer next inilah yang menghubungkan satu data mahasiswa ke data berikutnya membentuk linked list. Selain itu file ini juga mendeklarasikan semua fungsi yang digunakan agar main.c dan linked_list.c bisa saling terhubung.
📄 linked_list.c
File implementasi yang berisi logika dan cara kerja seluruh fungsi. Program menggunakan dynamic memory allocation dengan malloc() setiap kali data baru ditambahkan, dan free() ketika data dihapus agar tidak terjadi memory leak. Nilai akhir dihitung otomatis dengan rumus 30% tugas + 30% UTS + 40% UAS, dan huruf mutu ditentukan berdasarkan rentang nilai (A=85 ke atas, B=75–84, C=65–74, D=55–64, E=di bawah 55). Data juga bisa disimpan permanen ke file data_mahasiswa.csv menggunakan fungsi file I/O.
📄 main.c
File utama yang menjadi titik masuk program. Menampilkan menu interaktif menggunakan loop do-while sehingga pengguna bisa terus melakukan aksi tanpa harus menjalankan ulang program. Terdapat 5 fitur utama yaitu tambah data, tampilkan tabel, cari berdasarkan NIM, hapus berdasarkan NIM, dan simpan ke CSV. Input nama menggunakan format scanf(" %[^\n]") agar nama yang mengandung spasi seperti "Muhammad Indra" bisa terbaca dengan benar.

▶️ Cara Running
# 1. Masuk ke folder soal 1
cd C:\Users\Lenovo\UTS_PemrogramanDasar_MuhammadIndra_2025806062\C\soal1_data_mahasiswa

# 2. Compile program
gcc main.c linked_list.c -o program.exe

# 3. Jalankan program
.\program.exe

# 4. Ikuti menu yang muncul
=== SISTEM DATA MAHASISWA ===
1. Tambah Mahasiswa      → input nama, NIM, nilai tugas/UTS/UAS
2. Tampilkan Semua       → lihat tabel seluruh data
3. Cari Mahasiswa (NIM)  → cari berdasarkan NIM
4. Hapus Mahasiswa (NIM) → hapus data berdasarkan NIM
5. Simpan ke CSV         → ekspor ke data_mahasiswa.csv
0. Keluar