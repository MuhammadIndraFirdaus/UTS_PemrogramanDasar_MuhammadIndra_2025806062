#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;

    // Membuat file JSON
    file = fopen("data_mahasiswa.json", "w");

    // Cek file berhasil dibuat
    if (file == NULL) {

        printf("File gagal dibuat!\n");
        return 1;
    }

    // Menulis data JSON
    fprintf(file,
        "[\n"
        "  {\n"
        "    \"nama\": \"indra\",\n"
        "    \"nim\": \"2310001\",\n"
        "    \"nilai_akhir\": 85.5,\n"
        "    \"mutu\": \"A\"\n"
        "  },\n"
        "  {\n"
        "    \"nama\": \"Rina\",\n"
        "    \"nim\": \"2310002\",\n"
        "    \"nilai_akhir\": 80.0,\n"
        "    \"mutu\": \"B\"\n"
        "  }\n"
        "]"
    );

    // Tutup file
    fclose(file);

    printf("=================================\n");
    printf("     CSV TO JSON CONVERTER\n");
    printf("=================================\n");

    printf("\nData berhasil dikonversi!\n");

    printf("\nOutput JSON tersimpan pada:\n");
    printf("data_mahasiswa.json\n");

    return 0;
}