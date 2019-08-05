#include <stdio.h>

	// Ozellikle yildizlarla sekil yapmakta kullanilabilir

int main()
{
	int i, j;
	int a, b;
	int k, t;
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			printf("%d-%d\t", i, j);		
		}
	printf("\n");
	}	
	
	printf("\nTOPLAMLARI\n");	
		
	for(a=1; a<=10; a++){
		for(b=1; b<=10; b++){
			printf("%d\t", a+b);		
		}
	printf("\n");
	}	
	
	printf("\nCARPIMLARI\n");
	
	for(k=1; k<=10; k++){
		for(t=1; t<=10; t++){
			printf("%d\t", k*t);		
		}
	printf("\n");
	}	
	
	return 0;
}
