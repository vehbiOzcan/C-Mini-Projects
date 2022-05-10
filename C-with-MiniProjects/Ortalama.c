#include<stdio.h>

int main(){
	int sayac = 0,toplam = 0, sayi, c;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	prinf("\nCýkmak icin 0 girin");
	while(sayi != 0){
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	sayac++;
	toplam += sayi;
}
	printf("0 dahil mi ?");
	scanf("%c",&c);
	if(c == 'e'){
		sayac += 1;
	}else{
		
	}
printf("ortalama=%d ",(toplam+1) / (sayac-1));
return 0;	
}
