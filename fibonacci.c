#include <stdio.h>
  // satir baslarindaki yorum isaretleri kalkarsa ilk otuz sayi da ekranda gozukur
  // serinin 1'den basladigi kabul edilmistir

int main()
{
	int i;						// dongude kullanilmak icin
	long int x = 0, y =1;		// fibonacci sayilarinin tutulacagi degiskenler
	long int fib[30];			// sayilarin depolanacagi dizi
	int z = 0, s;				// z: fib dizizinin index sayisi, s: kullanicidan giris almak icin
	// printf("1.Sayi: 1\n");
	fib[z] = 1;					// fib dizi icine ilk eleman atamasi
	for(i=2; i < 31; i+=2){
		z++;
		x += y;
		y += x;
	//	printf("%d.Sayi: %ld\n", i, x);
		fib[z] = x;
		if (i==30)
			break;
		else {
	//		printf("%d.Sayi: %ld\n", i+1, y);
			fib[z+1] = y;
			z++;
		}
	}
	
	printf("Ilk 30 sayidan gormek istediginiz sayiyi giriniz: ");
	scanf("%d", &s);
	if (s <= 0 || s> 30){
		printf("HATA: 0'dan kucuk ve 30. sayidan buyuk bir sayiyi goremezsiniz.");
		}
	else
	printf("Fibonacci serisinin %d. sayisi: %ld", s, fib[s-1]);
	
	return 0;
}
