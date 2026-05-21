// C/soal1_data_mahasiswa/main.c
#include <stdio.h>
#include <string.h>
#include "linked_list.h"

int main() {
    Mahasiswa* head = NULL;
    int pilihan;

    do {
        printf("\n=== SISTEM DATA MAHASISWA ===\n");
        printf("1. Tambah Mahasiswa\n");
        printf("2. Tampilkan Semua\n");
        printf("3. Cari Mahasiswa (NIM)\n");
        printf("4. Hapus Mahasiswa (NIM)\n");
        printf("5. Simpan ke CSV\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            char nama[50], nim[15];
            float tugas, uts, uas;
            printf("Nama : "); scanf("%s", nama);
            printf("NIM  : "); scanf("%s", nim);
            printf("Nilai Tugas : "); scanf("%f", &tugas);
            printf("Nilai UTS   : "); scanf("%f", &uts);
            printf("Nilai UAS   : "); scanf("%f", &uas);
            tambahMahasiswa(&head, nama, nim, tugas, uts, uas);
            printf("Data berhasil ditambahkan!\n");
        }
        else if (pilihan == 2) tampilkanSemua(head);
        else if (pilihan == 3) {
            char nim[15];
            printf("Masukkan NIM: "); scanf("%s", nim);
            Mahasiswa* m = cariMahasiswa(head, nim);
            if (m) printf("Ditemukan: %s | Nilai Akhir: %.2f | Mutu: %c\n",
                          m->nama, m->nilai_akhir, m->mutu);
            else   printf("Tidak ditemukan.\n");
        }
        else if (pilihan == 4) {
            char nim[15];
            printf("Masukkan NIM yang dihapus: "); scanf("%s", nim);
            hapusMahasiswa(&head, nim);
        }
        else if (pilihan == 5) simpanCSV(head);
    } while (pilihan != 0);

    bebaskanMemori(head);
    return 0;
}