#include<stdio.h>

void ucgenciz(int sayi){
	
	int satir, yildiz;
	satir = sayi;
	for(satir = 0; satir < 6; satir++){
		
		for(yildiz = 0; yildiz <= satir; yildiz++)
		printf("*");
		
		printf("\n");
	}
}

int main(){
	
	int sayi;
	printf("Satir sayisi girin:");
	scanf("%d",&sayi);
    ucgenciz(sayi);

return 0;	
}


