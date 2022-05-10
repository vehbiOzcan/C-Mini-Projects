#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	int i, sayi, ilk = 1, ikinci = 1, gcc;

	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d\n%d\n",ilk,ikinci);

	for(i = 1;i <= sayi;i++){
		gcc = ikinci;
		ikinci += ilk;
		ilk = gcc;
		printf("%d\n",ikinci);			
	}
	
	return 0;
}
