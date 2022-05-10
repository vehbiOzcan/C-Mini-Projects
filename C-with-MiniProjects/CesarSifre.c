/* Vehbi Özcan 190106109059  */
#include<stdio.h>
int main(){  
	
	long int sayi, x, gecici, sonuc=0, kalan, devam,deger,a=0,c=0;
    
	do{
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
    
	gecici = sayi;
    	
	if(gecici<0) 
    {
    	gecici=gecici*-1;
    	a++;
	}
    while ( gecici > 0 ){
        kalan = gecici % 10;
        sonuc = sonuc * 10 + kalan;
        gecici /= 10;   
		
    }
    printf("Sifreli sayi:");
	
	while(sonuc>0){
		deger=sonuc%10+3;
	
		if(deger>=10) 
		deger=deger-10;
		
		if(a!=0){
			printf("-");
			a--;
		}
		printf("%d",deger);
		sonuc=sonuc/10;
				
	}
	
	printf("\nDevam(1):");
	scanf("%d",&devam);	
	
	}while(devam==1);
	
	printf("HOSCAKAL!!!\n\n\n");
	
system("pause");
return 0;
}

