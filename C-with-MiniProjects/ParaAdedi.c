#include<stdio.h>

int main(){
	
	int para,kalan,bolum,kalan2;
	
	printf("Cekilecek para miktarini giriniz:");
	scanf("%d",&para);

	bolum=para/20;
	printf("Yirmilik: %d \n",bolum);
	
	kalan=para%20;
	
	bolum=kalan/10;
	printf("Onluk: %d \n",bolum);
	
	kalan2=kalan%10;
	
	bolum=kalan2/5;
	printf("Beslik: %d \n",bolum);
	
	
	
	return 0;
}
