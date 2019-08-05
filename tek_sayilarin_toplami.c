#include <stdio.h>

int main()
{
	// Girilen sayiya kadar olan tek sayilarin toplami
	
	int i, n, sayi, toplam2, toplam = 0;
	
	printf("Bir sayı giriniz: ");
	scanf("%d", &sayi);

//for ile
	
	for(i=0; i <= sayi; i++)
	{
		if(i%2 != 0)
		{
			toplam = toplam + i;	
			//printf("%d\n", i); 	// satir basindaki yorum satiri kalkarsa tum sayilar gozukur
		}
	}
	
	printf("Tek sayıların toplamı: %d\n", toplam);
	
	printf("****\n****\n****\n");
	
//formül ile

	n = (sayi + 1) / 2;
	toplam2 = n*n;
	printf("Tek sayıların toplamı: %d\n", toplam2);
	
	
	return 0;
}
