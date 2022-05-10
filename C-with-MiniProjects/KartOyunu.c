#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
    
	
int main()
{
	
	char *deste[] = {"Karo", "Maca", "Kupa", "Sinek"},*deste2[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"} ;
	char *oyuncu1, *oyuncu2, *oyuncu1_deger, *oyuncu2_deger;  //Burdaki oyuncu her oyuncunun yerini tutan bir pointer olarak atandý.
	int sans,sans_iki,sans_deger,sans_iki_deger;
	char isima[15],isimb[15];
	int basla,i=1; 
	char devam;
	
	printf("\t\t\tOYUN\n\n");
	printf("1.Oyuncunun ismini giriniz: ");
	scanf("%s",&isima);
	printf("\n2.Oyuncunun isimini giriniz: ");
	scanf("%s",&isimb);
	printf("\nBaslamak icin entera basin ve her elden sonra 1 e basip entera basin:");
	printf("\n");
	
	srand(time(NULL));
do{
	printf("%d.El\n",i);
	sans = rand() % 4;
	oyuncu1 = deste[sans];
	sans_deger = rand() % 13;
	oyuncu1_deger = deste2[sans_deger];
	printf("1.Oyuncu: %s %s\n", oyuncu1,oyuncu1_deger);

	sans_iki = rand() % 4;
	oyuncu2 = deste[sans_iki];
	sans_iki_deger = rand() % 13;
	oyuncu2_deger = deste2[sans_iki_deger];
	printf("2.Oyuncu: %s %s\n\n", oyuncu2,oyuncu2_deger);
	
if(oyuncu1_deger == oyuncu2_deger)
	{
		printf("Oyun Berabere :D\n\n");
	}

else if(sans_deger > sans_iki_deger)
	{
		printf("Oyunu %s KAZANDI \n  ",isima);
	}
	
else if(sans_deger < sans_iki_deger)
	{
		printf("Oyunu %s KAZANDI \n  ",isimb);
	}
	
	scanf("%d",&devam);
	printf("\n");
	i++;
	
}while(devam == 1);
	return 0;
	
}
