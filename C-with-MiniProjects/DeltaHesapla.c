#include<stdio.h>
#include <math.h>

int main(){
	
	int a, b, c;
	float x1, x2, delta;

	int devam;
do{	
	printf("Denklemin a sini giriniz.");
	scanf("%d",&a);
	printf("Denklemin b sini giriniz.");
	scanf("%d",&b);
	printf("Denklemin c sini giriniz.");
	scanf("%d",&c);
	
	delta = (b * b)-(4 * a * c);
	
	if(delta < 0)
	printf("Denklemin gercek koku yoktur.");
	else{
	
	x1=(-b + (sqrt(delta))) / (2 * a);
	x2=(-b - (sqrt(delta))) / (2 * a);
	
	printf("Denklemin kokleri %.2f ve %.2f dir.",x1,x2);
	}
    printf("\nDevam etmek istiyorsaniz 1 e basiniz.");
    scanf("%d",&devam);

}while(devam == 1);
	
	
	return 0;
}
