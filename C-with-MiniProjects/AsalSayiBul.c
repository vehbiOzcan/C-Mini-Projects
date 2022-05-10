#include<stdio.h>
#include<locale.h>
#include<conio.h>
//asal sayý buluyor fonksiyon asal ise 1 deðil ise 0 dönüyor.
int asalmi(sayi){
	
	int i,a;
	
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
	    	return 0;
		}
	}
	return 1;
	}
	
int main(){
setlocale(LC_ALL,("Turkish"));	
	
	int sayi;
	
	printf("\t\t\tASAL SAYI BULMA PROGRAMI\n\n");
    printf("\n\nProgramý sonlandýrmak için 1 giriniz.\n\n");
do{
	
	printf("Sayý giriniz:");
	scanf("%d",&sayi);
	
	if(asalmi(sayi)==0)
	printf("\n>Sayý asal deðil\n\n");
	
	if(asalmi(sayi)==1)
	printf("\n>Sayý asaldýr\n\n");
	
	
}while(sayi==1);

printf("\n\nHOÞÇAKAL :)\n\n");	
	system("pause");
	
	return 0;
}	
	
	

