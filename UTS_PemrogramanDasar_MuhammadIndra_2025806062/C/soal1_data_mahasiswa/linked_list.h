// C/soal1_data_mahasiswa/linked_list.h
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Mahasiswa {
    char nama[50];
    char nim[15];
    float tugas, uts, uas;
    float nilai_akhir;
    char mutu;
    struct Mahasiswa* next;
} Mahasiswa;

void tambahMahasiswa(Mahasiswa** head, char* nama, char* nim, float tugas, float uts, float uas);
void tampilkanSemua(Mahasiswa* head);
void simpanCSV(Mahasiswa* head);
Mahasiswa* cariMahasiswa(Mahasiswa* head, char* nim);
void hapusMahasiswa(Mahasiswa** head, char* nim);
void bebaskanMemori(Mahasiswa* head);

#endif