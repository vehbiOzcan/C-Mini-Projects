#include<stdio.h>

int main(){
	
	int sayi, rakam = 0;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	printf("Sifreli sayi:\n");
	
	while(sayi != 0){
		rakam = sayi % 10;
		sayi = sayi / 10;
		
		if(rakam == 0)
		printf("%d => 2\n",rakam);
		else if(rakam == 1)
		printf("%d => 5\n",rakam);
		else if(rakam == 2)
		printf("%d => 3\n",rakam);
		else if(rakam == 3)
		printf("%d => 0\n",rakam);
		else if(rakam == 4)
		printf("%d => 1\n",rakam);
		else if(rakam == 5)
		printf("%d => 9\n",rakam);
		else if(rakam == 6)
		printf("%d => 7\n",rakam);
		else if(rakam == 7)
		printf("%d => 6\n",rakam);
		else if(rakam == 8)
		printf("%d => 4\n",rakam);
		else if(rakam == 9)
		printf("%d => 8\n",rakam);
	}
	
	return 0;
}
