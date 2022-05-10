#include<stdio.h>

void yildizCiz(int satir){
	
	int yildiz=1,bosluk,satir,i,sayi;
	
	do{
		
		printf("Satir sayisi giriniz:");
		scanf("%d",&sayi);
		bosluk = sayi;
		printf("\n");
		
		for(satir = 0; satir < sayi ; satir++){
		    
		    for(i = 0;i < bosluk; i++)
		    printf(" ");
			
			for(i = 1;i <= yildiz; i++)
		    printf("*");
			
			printf("\n");
		    yildiz += 2;
		    bosluk--;
		}
	   yildiz -= 2;
	   bosluk += 1;
	   for(satir = 0; satir < sayi; satir++){
	   	yildiz -= 2;
	   	bosluk++;
	   
	   for(i= 0; i < bosluk; i++)
	   printf(" ");
	   
	   for(i = 1; i <= yildiz; i++)
	   printf("*");
	   
	   printf("\n");	
   	 	 	 	
   }
  
   yildiz = 1;	

}

int main(){
	
	int devam;

  printf("Devam edeceksen 1 e bas:");
  scanf("%d",&devam);
  yildiz=1;
}while(devam==1);

system("pause");	
return 0;
}
