#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"turkish");	
	
	int bakiye,tutar,islem,devam;
	int kart = 1;
	printf("X Bankas�na Ho�geldiniz\n");
	printf("Yapmak istedi�iniz i�lemi se�iniz\n��lemler\n\n");

	bakiye = 5000;
	do{
	
		printf("1-Para �ekme\n2-Para Yat�rma\n3-Bakiye Sorgulama\n4-Havale\n5-Hesaptan Karta Para Aktar�m�\n6-Kart �adesi\n\n");
		scanf("%d",&islem);
		
		switch(islem){
			
			case 1:
				printf("Bakiyeniz:%d\n",bakiye);
				printf("�ekmek istedi�iniz tutar� giriniz:");
				scanf("%d",&tutar);
				if(tutar>bakiye){
					printf("Bakiyeniz yetersiz\n");
					
					 }
					 
					 
				
			
				bakiye-=tutar;
				printf("Kalan Bakiyeniz:%d",bakiye);
				break;
				
				case 2:
					printf("Yat�rmak istedi�iniz tutar� giriniz:");
					scanf("%d",&tutar);
					bakiye+=tutar;
					printf("Yeni bakiyeniz:%d'dir",bakiye);
					break;
				
				case 3:
				    printf("Bakiyeniz:%d'dir",bakiye);
				    
				    break;
					
				case 4:
					printf("Havale yapmak istedi�iniz tutar� giriniz:");
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
					printf("Kart�n�za aktarmak istedi�iniz tutar� giriniz:");
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
				
				printf("Herhangi bir i�lem yap�lmad�.\n");
				break;	
		}
		if(kart == 1){
		printf("\nBa�ka bir i�lem yapmak istiyorsan�z 0 a bas�n De�ilse 1 e bas�n: ");
		scanf("%d",&devam);
		printf("\n");
		}else{
			printf("\nKart iade edildi.L�tfen kart�n�z� al�n�z.");
			printf("\n�yi g�nler dileriz.\n\n");
		}
	}while(devam == 0 && kart == 1);
	return 0;
	}

