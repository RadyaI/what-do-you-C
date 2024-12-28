#include <stdio.h>
#include <stdlib.h>

//Deklarasi fungsi
void getAngka(int *n);

int main(){
	int input;
	int *n = &input;
	
	printf("Masukkan jumlah angka: ");
	scanf("%d", n);
	
	if(*n < 1){
		//Validasi input
		printf("Tidak boleh 0 atau negatif");
		exit(1);
	}
	getAngka(n);
	
	return 0;
}

void getAngka(int *n){
	int hasil[1] = {0};
	int angka;
	int i = 0;
	
	//Perulangan memasukkan angka
	for(; i < *n; i++){
		printf("Masukkan angka ke %d: ", i+1);
		scanf("%d", &angka);	
		hasil[0] += (int) angka;	
	}
	
	//Hasil
	printf("Jumlah total: %d\n", hasil[0]);
	printf("Pointer Total: %p", &hasil[0]);
	
}