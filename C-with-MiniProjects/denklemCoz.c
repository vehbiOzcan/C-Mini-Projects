#include<stdio.h>

int main(){
	
	float a,b,c;
	float pay;
	float x;
	
	printf("ax+b=c �eklindeki denklemin elemanlar�n� a b c �eklinde s�ras�yla giriniz: ");
	scanf("%f%f%f",&a,&b,&c);
	pay = c - b;
	x = pay / a;
	
	printf("X = %f",x);
	
	
}
