#include <stdio.h>
	// mengitung luas persegi panjang jika diketahui panjang 10 cm dan lebar 5 cm
int main (){
	double panjang = 10;
	double lebar = 5;
	
	double luasPersegiPanjang = panjang * lebar;
	
	printf("Luas Persegi Panjang : %.2lf cm^2\n", luasPersegiPanjang);
	
	return 0;
}