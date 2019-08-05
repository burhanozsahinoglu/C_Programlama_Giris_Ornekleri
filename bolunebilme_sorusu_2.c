#include <stdio.h>

	// 5'e tam bölünemeyen pozitif tam sayılar küçükten büyüğe sıralanıyor. Bu sıralamadaki 100. sayı kaçtır? 
	
int main()
{
	int i = 1, sayi;
	
	for(sayi=1; sayi<=150; sayi++)		// Yeterli sayiya ulasabilmek icin 150 kullanildi. Daha buyuk
	{		                        // ya da kucuk bir sayi yazilabilir. Ancak bu sayinin siralamadaki
		if(sayi%5 !=0)				// 100. sayidan kucuk olmamasi gerekir. Bu sayi bilinmedigi icin 150 yazildi.
		{		
			//printf("%d-)%d\n",i, sayi); 		// satir basindaki yorum satiri kalkarsa sirali liste gozukur
			if(i == 100)
			printf("****100. sayı: %d****\n", sayi);
		i++;
		}
	}
	
	return 0;
}
