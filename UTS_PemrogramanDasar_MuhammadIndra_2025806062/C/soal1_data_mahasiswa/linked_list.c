// C/soal1_data_mahasiswa/linked_list.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

char hitungMutu(float nilai) {
    if (nilai >= 85) return 'A';
    if (nilai >= 75) return 'B';
    if (nilai >= 65) return 'C';
    if (nilai >= 55) return 'D';
    return 'E';
}

void tambahMahasiswa(Mahasiswa** head, char* nama, char* nim,
                     float tugas, float uts, float uas) {
    Mahasiswa* baru = (Mahasiswa*)malloc(sizeof(Mahasiswa));
    strcpy(baru->nama, nama);
    strcpy(baru->nim, nim);
    baru->tugas = tugas;
    baru->uts   = uts;
    baru->uas   = uas;
    baru->nilai_akhir = (0.30 * tugas) + (0.30 * uts) + (0.40 * uas);
    baru->mutu  = hitungMutu(baru->nilai_akhir);
    baru->next  = *head;
    *head = baru;
}

void tampilkanSemua(Mahasiswa* head) {
    printf("\n%-20s %-12s %6s %6s %6s %10s %5s\n",
           "Nama","NIM","Tugas","UTS","UAS","NilaiAkhir","Mutu");
    printf("----------------------------------------------------------------------\n");
    Mahasiswa* cur = head;
    while (cur) {
        printf("%-20s %-12s %6.1f %6.1f %6.1f %10.2f %5c\n",
               cur->nama, cur->nim,
               cur->tugas, cur->uts, cur->uas,
               cur->nilai_akhir, cur->mutu);
        cur = cur->next;
    }
}

void simpanCSV(Mahasiswa* head) {
    FILE* f = fopen("data_mahasiswa.csv", "w");
    fprintf(f, "Nama,NIM,Tugas,UTS,UAS,NilaiAkhir,Mutu\n");
    Mahasiswa* cur = head;
    while (cur) {
        fprintf(f, "%s,%s,%.1f,%.1f,%.1f,%.2f,%c\n",
                cur->nama, cur->nim,
                cur->tugas, cur->uts, cur->uas,
                cur->nilai_akhir, cur->mutu);
        cur = cur->next;
    }
    fclose(f);
    printf("\nData disimpan ke data_mahasiswa.csv\n");
}

Mahasiswa* cariMahasiswa(Mahasiswa* head, char* nim) {
    Mahasiswa* cur = head;
    while (cur) {
        if (strcmp(cur->nim, nim) == 0) return cur;
        cur = cur->next;
    }
    return NULL;
}

void hapusMahasiswa(Mahasiswa** head, char* nim) {
    Mahasiswa* cur = *head;
    Mahasiswa* prev = NULL;
    while (cur) {
        if (strcmp(cur->nim, nim) == 0) {
            if (prev) prev->next = cur->next;
            else *head = cur->next;
            free(cur);
            printf("Mahasiswa dengan NIM %s berhasil dihapus.\n", nim);
            return;
        }
        prev = cur;
        cur = cur->next;
    }
    printf("NIM %s tidak ditemukan.\n", nim);
}

void bebaskanMemori(Mahasiswa* head) {
    while (head) {
        Mahasiswa* tmp = head;
        head = head->next;
        free(tmp);
    }
}