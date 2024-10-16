#include <stdio.h>
#define PHI 3.14159

int main()
{
	float jariJari, luas, keliling;
	printf("Masukkan jari jari lingkaran: ");
	if (scanf("%f", &jariJari) != 1, jariJari < 0) {
		
		printf("Input tidak valid. Harap masukkan angka positif.\n");
		return 1;
	}
	
	luas = PHI * jariJari * jariJari;
	keliling = PHI * 2 * jariJari;
	
	
	
	printf("Luas Lingkaran: %.2f\n", luas);
	printf("Keliling lingkaran: %.2f\n", keliling);
	
	
	return 0;
}