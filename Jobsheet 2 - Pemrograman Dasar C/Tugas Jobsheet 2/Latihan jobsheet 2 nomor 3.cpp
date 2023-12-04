#include <stdio.h>
//menghitung luas segitiga jika diketahui panjang alas 8 cm dan tinggi 5 cm

int main (){
	double alas = 8.0;
	double tinggi = 5.0;
	
	double luasSegitiga = 0.5 * alas * tinggi;
	
	;printf("Luas segitiga : %.2lf cm^2\n", luasSegitiga);
	
	return 0;
}