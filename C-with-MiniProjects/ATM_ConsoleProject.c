#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"turkish");	
	
	int bakiye,tutar,islem,devam;
	int kart = 1;
	printf("X Bankasýna Hoþgeldiniz\n");
	printf("Yapmak istediðiniz iþlemi seçiniz\nÝþlemler\n\n");

	bakiye = 5000;
	do{
	
		printf("1-Para Çekme\n2-Para Yatýrma\n3-Bakiye Sorgulama\n4-Havale\n5-Hesaptan Karta Para Aktarýmý\n6-Kart Ýadesi\n\n");
		scanf("%d",&islem);
		
		switch(islem){
			
			case 1:
				printf("Bakiyeniz:%d\n",bakiye);
				printf("Çekmek istediðiniz tutarý giriniz:");
				scanf("%d",&tutar);
				if(tutar>bakiye){
					printf("Bakiyeniz yetersiz\n");
					
					 }
					 
					 
				
			
				bakiye-=tutar;
				printf("Kalan Bakiyeniz:%d",bakiye);
				break;
				
				case 2:
					printf("Yatýrmak istediðiniz tutarý giriniz:");
					scanf("%d",&tutar);
					bakiye+=tutar;
					printf("Yeni bakiyeniz:%d'dir",bakiye);
					break;
				
				case 3:
				    printf("Bakiyeniz:%d'dir",bakiye);
				    
				    break;
					
				case 4:
					printf("Havale yapmak istediðiniz tutarý giriniz:");
					scanf("%d",tutar);
					
					if(tutar>bakiye){
						printf("Bakiyeniz yetersiz");
					}
					else{
					
					bakiye-=tutar;
			        printf("Yeni bakiyeniz:%d'dir",bakiye);
					
					}
					break;
					
				case 5:
					printf("Kartýnýza aktarmak istediðiniz tutarý giriniz:");
					scanf("%d",tutar);
					if(tutar>bakiye){
					printf("Bakiyeniz yetersiz");
					}
					bakiye-=tutar;
					printf("Yeni bakiyeniz:%d'dir",bakiye);
					
					
					break;
				
				case 6:
					kart = 0;
					break;
				default:
				
				printf("Herhangi bir iþlem yapýlmadý.\n");
				break;	
		}
		if(kart == 1){
		printf("\nBaþka bir iþlem yapmak istiyorsanýz 0 a basýn Deðilse 1 e basýn: ");
		scanf("%d",&devam);
		printf("\n");
		}else{
			printf("\nKart iade edildi.Lütfen kartýnýzý alýnýz.");
			printf("\nÝyi günler dileriz.\n\n");
		}
	}while(devam == 0 && kart == 1);
	return 0;
	}

