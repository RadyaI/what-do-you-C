#include <stdio.h>

int main()
{
	int jumlah = 0;
	
	char jawaban ='B';
	
	double suhu_awal = 25.0;
	
	float radius = 0.0;
	
	double harga = 10000.0;
	
	int nilai_hexa = 0x1A;
	
	int nilai_oktal = 022;
	
	
	printf("Nilai jumlah: %d\n", jumlah);
	printf("Nilai jawaban: %c\n", jawaban);
	
	
	printf("Nilai suhu_awal: %.21f\n", suhu_awal);
	printf("Nilai radius: %.2f\n", radius);
	
	
	printf("Nilai harga: %.21f\n", harga);
	printf("Nilai nilai_hexa: 0x%X (desimal: %d)\n", nilai_hexa,nilai_hexa);
	printf("Nilai nilai_oktal: 0%o (desimal: %d\n", nilai_oktal,nilai_oktal);
	
	return 0;
}