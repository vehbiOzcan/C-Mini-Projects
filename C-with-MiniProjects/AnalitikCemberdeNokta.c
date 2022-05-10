#include<stdio.h>

int main(){
	
	int a, b, r, sonuc, gcc, i, x, y;
	
	printf("Denklemi (x-a)^2+(y-b)^2=r^2 olan dairenin, merkez koordinatlari a ile b ve yaricapi r 'dir.\n");
	printf("Denklemin a, b ve r sini sirayla giriniz\n");
	
	printf("a sini giriniz: ");
	scanf("%d",&a);
	
	printf("\nb sini giriniz: ");
	scanf("%d",&b);
	
	printf("\nr sini giriniz:");
	scanf("%d",&r);
	
	sonuc = r * r ;
	
	printf("\nBulmak istediginiz nokta ciftinin x ve y sini giriniz: ");
	
	for(i=1;i<=20;i++){
		printf("\nx i giriniz: ");
		scanf("%d",&x);
		
		printf("\ny yi giriniz: ");
		scanf("%d",&y);
		
		gcc = ((x-a)*(x-a)) + ((y-b)*(y-b));
		
		if(gcc < sonuc){
		printf("\nr^2 den kucuk, Nokta dairenin icinde\n");
		}
		
		else if(gcc > sonuc){
		printf("\nr^2 den buyuk, Nokta dairenin disinda\n");
		}
		
		else if(gcc == sonuc){
		printf("\nr^2 ye esit, Nokta dairenin uzerinde\n");
		}
	}
	
	
	return 0;
}
