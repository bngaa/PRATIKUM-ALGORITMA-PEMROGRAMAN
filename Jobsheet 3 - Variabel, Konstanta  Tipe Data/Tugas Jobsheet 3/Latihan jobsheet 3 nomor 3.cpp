# include <stdio.h>
	

int main() {
	double const PI = 3.14
	;double d, r, LP, volume;
	
	printf("Masukkan jari-jari linngkaran : ");
	scanf("%lf", &r);
	
	LP = 4.0 * PI * r * r ;
	volume = (4.0 / 3.0) * PI * r * r * r;
	
	printf ("Nilai Luas Permukaan : %.2lf\n", LP);
	printf ("Nilai volume : %.2lf\n", volume);
	
    return 0;
}





