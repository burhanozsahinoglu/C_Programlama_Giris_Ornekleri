#include <stdio.h>

    //1'den 100'e kadar numaralandırılmış 100 birim kareden oluşan tabloda bazı kareler boyanacaktır.
    //Numarası çift olanlar sarıya, 3'ün katı olanlar kırmızıya, 5'in katı olanlar maviye boyanacaktır.
    //Tabloda kaç tane turuncu* renkte kare vardır?  *Turuncu renk: Kırmızı ve sarı rengin karışımıdır.
    
int main()
{
	int i, turuncu = 0;
	
	for(i=1; i<=100; i++)
	{
		if(i%6 == 0)			// hem 2'ye hem de 3'e bolunebilen sayilar (yani 6'ya bolunebilme)
		{
			if(i%5 != 0)		// bu sayilar icinden 5'e bolunmeyen sayilar(mavi renk olanlar)
			{
				printf("%d\n", i);
				turuncu++;
			}
		}
	}
	printf("Turuncu: %d", turuncu);
	
	return 0;
}
