#include<stdio.h>
#include<locale.h>
#include<conio.h>
//asal say� buluyor fonksiyon asal ise 1 de�il ise 0 d�n�yor.
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
    printf("\n\nProgram� sonland�rmak i�in 1 giriniz.\n\n");
do{
	
	printf("Say� giriniz:");
	scanf("%d",&sayi);
	
	if(asalmi(sayi)==0)
	printf("\n>Say� asal de�il\n\n");
	
	if(asalmi(sayi)==1)
	printf("\n>Say� asald�r\n\n");
	
	
}while(sayi==1);

printf("\n\nHO��AKAL :)\n\n");	
	system("pause");
	
	return 0;
}	
	
	

