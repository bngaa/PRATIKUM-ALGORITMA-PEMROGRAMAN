#include <stdio.h>

int main(){
	int i = 0;
	int j = 0;
	int k ;
	
	for ( int i=0 ; i<= 5 ; i++){
		for( int j=0 ; j<=i ; j++ ){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");printf("\n");
	
	for ( int i =0; i<5 ; i++){
		for(int j = 0; j<i; j++){
			printf(" ");
		}
		for ( k = 5; k>i ; k--){
			printf ("*") ;
		}
		printf("\n");
	}
	
	return 0;
}