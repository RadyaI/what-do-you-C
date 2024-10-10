#ifndef BUKU_H
#define BUKU_H

typedef struct {
    int id;
    char judul[100];
    char pengarang[100];
    int tahun_terbit;
} Buku;

extern Buku daftar_buku[100];
extern int jumlah_buku;

void tambah_buku();
void lihat_buku();
void update_buku();
void hapus_buku();

#endif // BUKU_H
