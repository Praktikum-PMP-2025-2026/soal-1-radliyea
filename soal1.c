//Amelia Rahma Nurradliyah
//EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026 
//Modul : 1 - Overview of C Language 
//Soal : soal1 
//Hari dan Tanggal : Senin, 13 April 2026
//Pembuat : Amelia Rahma Nurradliyah
//NIM : 13224020
//Deskripsi : mengerjakan soal 1 dimana perintah soal terebut membuat gerbang kemaanan dengan memproses data satu peneliti dengan tujuan penentuan status level izin, suhu tubuh, kadar radiasi, dan jam kedatangan

#include <stdio.h>

int main() {
    int izin;
    int suhu;
    int radiasi;
    int jam;
    //masukkan input melalui scanf secara manual dan berurutan
    scanf("%d", &izin);
    scanf("%d", &suhu);
    scanf("%d", &radiasi);
    scanf("%d", &jam);
    //selanjutnya cek status dengan urutan prioritas
    if (radiasi >= 6) {
        printf("TOLAK\n");
    }
    else if (suhu >= 390) {
        printf("KARANTINA\n");
    }
    else if (izin == 1 && (jam < 6 || jam > 20 )) {
        printf("TOLAK\n");
    }
    else if (izin == 1) {
        printf("MASUK\n");
    } 
    else if (izin == 2 && radiasi <= 2 && jam >= 8 && jam <= 18) {
        printf("MASUK\n");
    } 
    else if (izin == 2) {
        printf("PEMERIKSAAN\n");
    } 
    else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("MASUK\n");
    } 
    else {
        printf("TOLAK\n");
    }

    return 0;
}