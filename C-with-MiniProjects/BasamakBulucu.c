#include<stdio.h>

int main(){
	
	int sayi,basamak=0,toplam=0,devam;
	
	
do{
printf("Sayi giriniz:");
	scanf("%d",&sayi);
	toplam=0;
	basamak=0;
while(sayi>0){

     
    toplam+=(sayi%10);
    
    basamak++;
    
    sayi=sayi/10;
}

printf("Sayinin basamaklari toplami %d dir ve sayi %d basamaklidir.",toplam,basamak);	
	
printf("\n\nDevam edelim mi(evet=1 e bas)\n");
scanf("%d",&devam);
}while(devam==1);

	
	return 0;
}
