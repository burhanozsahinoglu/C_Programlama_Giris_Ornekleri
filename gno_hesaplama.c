#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define KREDI5 5.0
#define KREDI4 4.0 				//Programin verimliliginden daha cok ogrendigim konularin toplu
#define KREDI3 3.0				//halde kullanilmasi amaciyla yazildi...


float yuzdebes();
float yuzdeikibucuk();
float yuzdeon();
float yuzdeotuz();
float yuzdeelli();


int main()
{					
	
	int ders, not[7], dkontrol=0, toplam=0;
	float odev1, odev2, ksinav1, ksinav2, vize, final, proje;
	float gnoyuz, gnodort;
	float ortalama[7], ort[7];
	
	printf("Siber Guvenlige Giris: %d\nProgramlama Temelleri ve Algoritma: %d\nIngilizce I: %d\nBilisim Hukusu: %d\n", 1, 2, 3, 4);
	printf("Matematik: 5\nVeritabani Tasarimi: 6\nSektorel Cozumler: 7\n");

	do{
	printf("\nCikis Icin: 888\nDonem Sonu Genel Not Ortalamanizi Gormek Icin: 999\n");
	printf("***GNO Icin Once Yedi Dersin Ortalamasinin Hesaplanmasi Gerekir*** \n\nOrtalamanizi hesaplamak istediginiz dersi seciniz: "); 
	scanf("%d", &ders);
	
	
	switch(ders){
		case 1:
			printf("\t***Siber Güvenlige Giris***\n");
			printf("Kucuk Sinav 1 Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Kucuk Sinav 2 Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Odev 1 Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdebes(not[2]); printf("Odev 1 Puaniniz: %.2f\n", odev1);
			printf("Odev 2 Notunuz: "); scanf("%d", &not[3]);
			odev2 = yuzdebes(not[3]); printf("Odev 2 Puaniniz: %.2f\n", odev2);
			printf("Vize Notunuz: "); scanf("%d", &not[4]);
			vize = yuzdeotuz(not[4]); printf("Vize Puaniniz: %.2f\n", vize);
			printf("Final Notunuz: "); scanf("%d", &not[5]);
			final=yuzdeelli(not[5]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+odev2+vize+final)+.5); ortalama[0] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tSiber Guvenlige Giris Dersi Puan Ortalamaniz: %d\t*\n", toplam);
			
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[0] = 4.00;
			}
				
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[0] = 3.50;
			}
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[0] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[0] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[0] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	  
				ort[0] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	
				ort[0] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
				ort[0] = 0.50;
			}
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
				ort[0] = 0.00;
			}	
		break;
		
		case 2:
			printf("\t***Programlama Temelleri ve Algoritma***\n");
			printf("Kucuk Sinav 1 Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Kucuk Sinav 2 Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Odev Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdeon(not[2]); printf("Odev 1 Puaniniz: %.2f\n", odev1);
			printf("Vize Notunuz: "); scanf("%d", &not[3]);
			vize = yuzdeotuz(not[3]); printf("Vize Puaniniz: %.2f\n", vize);
			printf("Final Notunuz: "); scanf("%d", &not[4]);
			final=yuzdeelli(not[4]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+vize+final)+.5); ortalama[1] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tProgramlama Temelleri ve Algoritma: %d\t\t\t*\n", toplam);
			
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[1] = 4.00;
			}
			
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	
				ort[1] = 3.50;
			}
			
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[1] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[1] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[1] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[1] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[1] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[1] = 0.50;
			}
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[1] = 0.00;
			}	
		break;
		
		case 3:
			printf("\t***Ingilizce 1***\n");
			printf("Kucuk Sinav 1 Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Kucuk Sinav 2 Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Odev Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdeon(not[2]); printf("Odev 1 Puaniniz: %.2f\n", odev1);
			printf("Vize Notunuz: "); scanf("%d", &not[3]);
			vize = yuzdeotuz(not[3]); printf("Vize Puaniniz: %.2f\n", vize);
			printf("Final Notunuz: "); scanf("%d", &not[4]);
			final=yuzdeelli(not[4]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+vize+final)+.5); ortalama[2] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tİngilizce 1 Dersi Puan Ortalamiz: %d\t\t\t*\n", toplam);
			
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	
				ort[2] = 4.00;
			}
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[2] = 3.50;
			}
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[2] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		
				ort[2] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	
				ort[2] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[2] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[2] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[2] = 0.50;
			}			
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[2] = 0.00;}	
		break;
		
		case 4:
			printf("\t***Bilisim Hukuku***\n");
			printf("Kucuk Sinav Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Odev Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Sunum Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdeon(not[2]); printf("Sunum Puaniniz: %.2f\n", odev1);
			printf("Vize Notunuz: "); scanf("%d", &not[3]);
			vize = yuzdeotuz(not[3]); printf("Vize Puaniniz: %.2f\n", vize);
			printf("Final Notunuz: "); scanf("%d", &not[4]);
			final=yuzdeelli(not[4]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+vize+final)+.5); ortalama[3] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tBilisim Hukuku Dersi Puan Ortalamaniz: %d\t\t*\n", toplam);
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[3] = 4.00;
			}
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[3] = 3.50;
			}
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		
				ort[3] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		
				ort[3] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[3] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[3] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[3] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[3] = 0.50;
			}
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[3] = 0.00;
			}	
		break;
		
		case 5:
			printf("\t***Matematik***\n");
			printf("Kucuk Sinav 1 Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Kucuk Sinav 2 Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Odev Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdeon(not[2]); printf("Odev Puaniniz: %.2f\n", odev1);
			printf("Vize Notunuz: "); scanf("%d", &not[3]);
			vize = yuzdeotuz(not[3]); printf("Vize Puaniniz: %.2f\n", vize);
			printf("Final Notunuz: "); scanf("%d", &not[4]);
			final=yuzdeelli(not[4]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+vize+final)+.5); ortalama[4] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tMatematik Dersi Puan Ortalamiz: %d\t\t\t*\n", toplam);
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[4] = 4.00;
			}
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[4] = 3.50;
			}
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[4] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[4] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[4] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[4] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[4] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[4] = 0.50;
			}
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[4] = 0.00;
			}	
		break;
		
		case 6:
			printf("\t***Veritabani Tasarimi***\n");
			printf("Kucuk Sinav 1 Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Kucuk Sinav 2 Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Odev  1 Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdeikibucuk(not[2]); printf("Odev 1 Puaniniz: %.2f\n", odev1);
			printf("Odev 2 Notunuz: "); scanf("%d", &not[3]);
			odev2 = yuzdeikibucuk(not[3]); printf("Odev 2 Puaniniz: %.2f\n", odev2);
			printf("Proje Notunuz: "); scanf("%d", &not[4]);
			proje = yuzdebes(not[4]); printf("Proje Puaniniz: %.2f\n", proje);
			printf("Vize Notunuz: "); scanf("%d", &not[5]);
			vize = yuzdeotuz(not[5]); printf("Vize Puaniniz: %.2f\n", vize);	
			printf("Final Notunuz: "); scanf("%d", &not[6]);
			final=yuzdeelli(not[6]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+odev2+proje+vize+final)+.5); ortalama[5] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tVeritabanı Tasarimi Dersi Puan Ortalamaniz: %d\t\t*\n", toplam);
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[5] = 4.00;
			}
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[5] = 3.50;
			}
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[5] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[5] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[5] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[5] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[5] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[5] = 0.50;
			}
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[5] = 0.00;
			}	
		break;
		
		case 7:
			printf("\t***Sektorel Cozumler***\n");
			printf("Kucuk Sinav 1 Notunuz: "); scanf("%d", &not[0]);
			ksinav1 = yuzdebes(not[0]); printf("Kucuk Sinav 1 Puaniniz: %.2f\n", ksinav1);
			printf("Kucuk Sinav 2 Notunuz: "); scanf("%d", &not[1]);
			ksinav2 = yuzdebes(not[1]); printf("Kucuk Sinav 2 Puaniniz: %.2f\n", ksinav2);
			printf("Proje Notunuz: "); scanf("%d", &not[2]);
			odev1 = yuzdeon(not[2]); printf("Proje Puaniniz: %.2f\n", odev1);
			printf("Vize Notunuz: "); scanf("%d", &not[3]);
			vize = yuzdeotuz(not[3]); printf("Vize Puaniniz: %.2f\n", vize);
			printf("Final Notunuz: "); scanf("%d", &not[4]);
			final=yuzdeelli(not[4]); printf("Final Puaniniz: %.2f\n", final);
			toplam = floor((ksinav1+ksinav2+odev1+vize+final)+.5); ortalama[6] = toplam; dkontrol++;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tSektorel Cozumler Dersi Puan Ortalamaniz: %d\t\t*\n", toplam);
			if(toplam >= 89.5){
				printf("*\tHarf Notu: AA - Mukemmel\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[6] = 4.00;
			}
			else if(toplam >=79.5 && toplam < 89.5){
				printf("*\tHarf Notu: BA - Çok Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[6] = 3.50;
			}
			else if(toplam >=72.5 && toplam < 79.5){
				printf("*\tHarf Notu: BB - Iyi\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[6] = 3.00;
			}
			else if(toplam >=65.5 && toplam < 72.5){
				printf("*\tHarf Notu: CB - Orta\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");		 
				ort[6] = 2.50;
			}
			else if(toplam >=59.5 && toplam < 65.5){
				printf("*\tHarf Notu: CC - Yeterli\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[6] = 2.00;
			}
			else if(toplam >=54.5 && toplam < 59.5){
				printf("*\tHarf Notu: DC - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[6] = 1.50;
			}
			else if(toplam >=49.5 && toplam < 54.5){
				printf("*\tHarf Notu: DD - Gecer\t\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");	 
				ort[6] = 1.00;
			}
			else if(toplam >=35.5 && toplam < 49.5){
				printf("*\tHarf Notu: FD - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[6] = 0.50;
			}
			else if(toplam < 35.5){
				printf("*\tHarf Notu: FF - Basarisiz\t\t\t\t*\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
				ort[6] = 0.00;
			}	
		break;
		
		case 888:
			printf("Cikis...\n");
		break;

		case 999:
			if (dkontrol == 7){
			gnoyuz = ((ortalama[0] * KREDI5)+(ortalama[1] * KREDI5) + (ortalama[2] * KREDI4) + (ortalama[3] * KREDI4) + (ortalama[4] * KREDI3) + (ortalama[5] * KREDI5) + (ortalama[6] * KREDI3)) / 29.0;
			gnodort = ((ort[0] * KREDI5)+(ort[1] * KREDI5) + (ort[2] * KREDI4) + (ort[3] * KREDI4) + (ort[4] * KREDI3) + (ort[5] * KREDI5) + (ort[6] * KREDI3)) / 29.0;
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*\tDonem Sonu Genel Not Ortalamaniz 100 Uzerinden\t: %.2f\t*\n", gnoyuz);
			printf("*\tDonem Sonu Genel Not Ortalamaniz 4 Uzerinden\t: %.2f\t*\n", gnodort);
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n"); }
			else printf("Eksik Ders Sayisi...\n");
		break;

		default:
			printf("Hatali giris yaptiniz...\n");	
			
		}
	
		
		
	}while(ders != 888);
	
	
	
	return 0;
}

float yuzdeikibucuk(int not){
	
	float sonuc;
	sonuc = not * (0.05 / 2);
	
	return sonuc;
	}
	
float yuzdebes(int not){
	
	float sonuc;
	sonuc = not * 0.05;
	
	return sonuc;
	}
	
float yuzdeon(int not){
	
	float sonuc;
	sonuc = not * 0.10;
	
	return sonuc;
	}
	
float yuzdeotuz(int not){
	
	float sonuc;
	sonuc = not * 0.30;
	
	return sonuc;
	}

float yuzdeelli(int not){
	
	float sonuc;
	sonuc = not * 0.50;
	
	return sonuc;
	}
