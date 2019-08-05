#include <stdio.h>

int main()
{
	int enb, s1, s2, s3;
	
	printf("Üç farklı tam sayı giriniz: ");
	scanf("%d%d%d", &s1, &s2, &s3);
	
	if(s1 > s2)
	{
		if (s1 > s3)
		{
			enb = s1;
			if(s2 > s3)
			printf("Sıralama: %d > %d > %d\n", s1, s2, s3);
			else
			printf("Sıralama: %d > %d > %d\n", s1, s3, s2);
			
		}	
		else
		{
			enb = s3;
			if(s1 > s2)
			printf("Sıralama: %d > %d > %d\n", s3, s1, s2);
		}
	}
	
	if(s2 > s1)
	{
		if(s2 > s3)
		{
			enb = s2;
			if(s3 > s1)
			printf("Sıralama: %d > %d > %d\n", s2, s3, s1);
			else
			printf("Sıralama: %d > %d > %d\n", s2 , s1 , s3);
		}	
		else
		{
			enb = s3;
			if(s2 > s1)
			printf("Sıralama: %d > %d > %d\n", s3, s2 ,s1);
			else
			printf("Sıralama: %d > %d > %d\n", s3 , s1, s2);
		}
	}
	
	printf("En büyük sayı: %d", enb);
	
	
	return 0;
}
