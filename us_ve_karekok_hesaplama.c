#include <stdio.h>


float karekokhesaplama(float);
float ushesaplama(float, int);

int main()
{
	float sayi;
	float us, ussonuc, koksonuc;
	
	
	printf("Bir sayi giriniz: ");	scanf("%f", &sayi);
	printf("Us giriniz: "); 		scanf("%f", &us);
	
	ussonuc = ushesaplama(sayi, us);
	koksonuc = karekokhesaplama(sayi);

	
	if(us < 0){						//us degeri negatif oldugu zaman
	printf("\nSayi\t\t Ussu\t\t Karekoku\n"); 		//sonuc cok kucuk degerler olacagı
	printf("%.f\t\t%.5f\t\t%.2f", sayi, ussonuc, koksonuc);	// icin ussonuc %.5f olarak yazıldı.	
	}
	else{
	printf("\nSayi\t\t Ussu\t\t Karekoku\n"); 
	printf("%.f\t\t%.f\t\t%.2f", sayi, ussonuc, koksonuc);
	}
	
	
	return 0;
}

float ushesaplama(float ussayi, int us)
{
	float sonuc = 1;
	int i;
		
	if(us < 0){
		for(i=0; i>us; i--)
		{
			sonuc *=1/ussayi;
		}
	}

	else{
		for(i=1; i<=us; i++){
			sonuc *= ussayi;
		}
	}
			
	return sonuc;
						
}

float karekokhesaplama(float koksayi)
{
	float k = 1;
	int i;
	
	if(koksayi<0)				//karekok icindeki sayi negatif olamayacagi icin
	koksayi= -1*koksayi;			//girilen sayi negatif ise pozitife ceviriyoruz
	for(i = 0; i<koksayi; i++)
		k = (1./2)*(k+(koksayi/k));
		
	return k;
	
}
