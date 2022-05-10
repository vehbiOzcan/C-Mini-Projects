#include<stdio.h>
#include<string.h>

void terscevir(char yazi[]){
	
	int gcc,uzunluk,i;
	uzunluk = strlen(yazi);
	
	for(i = 0;i < uzunluk / 2; i++){
		gcc = yazi[i];
		yazi[i] = yazi[uzunluk-1-i];
		yazi[uzunluk-1-i] = gcc;
		
	}
	
}

int main(){
	
	char text[200];
	printf("Ters cevrilecek yaziyi girin : ");
	scanf("%s",text);
	terscevir(text);
	printf("%s",text);
	
	
	return 0;
}
