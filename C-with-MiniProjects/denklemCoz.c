#include<stdio.h>

int main(){
	
	float a,b,c;
	float pay;
	float x;
	
	printf("ax+b=c şeklindeki denklemin elemanlarını a b c şeklinde sırasıyla giriniz: ");
	scanf("%f%f%f",&a,&b,&c);
	pay = c - b;
	x = pay / a;
	
	printf("X = %f",x);
	
	
}
