#include <stdio.h>

void hitung(int i);

int main(){
	FILE *file = fopen("produk.txt","a+");
	
	char barang[100];
	
	while(fgets(barang, sizeof(barang), file) != NULL){
		printf("%s",barang);
	}
	
	fclose(file);
	
	return 0;
}