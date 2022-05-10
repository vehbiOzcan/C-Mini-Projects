#include<stdio.h>

void kareciz(int sayi,char kar){
	int i, j;
	
	for(i = 0;i <= sayi; i++){
		printf("\n");
		for(j = 0; j <= sayi; j++){
			printf("%c ",kar);
		}
	}
	
}

int main(){
	
	int sayi;
	char kar;
	printf("cizmek istediginiz kare boyutunu ve karakteri giriniz:");
	scanf("%d %c",&sayi,&kar);
	
	kareciz(sayi,kar);
	
	return 0;
}
