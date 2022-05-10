#include<stdio.h>
#define PI 3.14
int main(){
	
	int islem,devam;
	float a,b,c,d,hacim,h,r,alan;
	 printf("\t\t\t\tAlan ve Hacim hesaplama programi\n\n");
     printf("1-Kare\n2-Dikdortgen\n3-Ucgen\n4-Koni\n5-Kure\n6-Daire\n");
 do{
    printf("\nAlanini veya Hacmini hesaplamak istediginiz sekli giriniz:");
    scanf("%d",&islem);

	
	switch(islem){
	
	case 1:
		printf("\nKarenin bir kenarini giriniz:");
		scanf("%f",&a);
		alan = a * a;
		printf("Karenin alani %.2f dir.",alan);
		printf("\n\nDevam edelim mi?(evetse 1 bas hayirsa farkli bir sayi)");
		scanf("%d",&devam);
		break;
	
	case 2:
		printf("\nDikdortgenin kenarlarini giriniz:");
		scanf("%f %f",&a,&b);
		alan = a * b;
		printf("Dikdortgenin alani %.2f dir.",alan);
		printf("\n\nDevam edelim mi?(evetse 1 bas hayirsa farkli bir sayi)");
		scanf("%d",&devam);
		break;
	case 3:
	    printf("\nDik ucgenin dik kenarlarini giriniz:");
		scanf("%f",&c,&d);
		alan=(c*d)/2;
		printf("Ucgeninnin alani %.2f dir.",alan);
		printf("\n\nDevam edelim mi?(evetse 1 bas hayirsa farkli bir sayi)");
		scanf("%d",&devam);
		break;	
	case 4:
	    printf("\nKoninin taban yaricapini giriniz:");
		scanf("%f",&r);
		 printf("\nKoninin yuksekigini giriniz:");
		scanf("%f",&h);
		hacim = (PI * r * r * h) / 3;
		printf("Koninin hacmi %.2f dir.",hacim);
		printf("\n\nDevam edelim mi?(evetse 1 bas hayirsa farkli bir sayi)");
		scanf("%d",&devam);
		break;	
	case 5:
		printf("\nKurenin yaricapini giriniz:");
		scanf("%f",&r);
		
		hacim = (4 * PI * r * r * r) / 3;
		printf("Kurenin hacmi %.2f dir.",hacim);
		printf("\n\nDevam edelim mi?(evetse 1 bas hayirsa farkli bir sayi)");
		scanf("%d",&devam);
		break;	
	case 6:
	    printf("\nDairenin yaricapini giriniz:");
		scanf("%f",&r);
		alan = (PI * r * r);
		printf("Dairenin alani %.2f dir.",alan);
		printf("\n\nDevam edelim mi?(evetse 1 bas hayirsa farkli bir sayi)");
		scanf("%d",&devam);
		break;		
}
}while(devam == 1);

	printf("\n\nBy By :D\n\t\t\tDesigned by Vehbi\n\n");
	
	system("pause");
	return 0;
}
