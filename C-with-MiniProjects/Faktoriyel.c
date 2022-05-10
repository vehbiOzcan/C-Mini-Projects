#include<stdio.h>
int fakt(int sayi){
	
	int fakt,i;

	fakt = 1;
	
	for(i = 1;i <= sayi; i++){
		fakt = fakt * i;
	}
	printf("faktoriyel %d dir",fakt);

}

int main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);

	fakt(sayi);

return 0;
}
