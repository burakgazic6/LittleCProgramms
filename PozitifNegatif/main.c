#include <stdio.h>

int main() {
	int Number ;

	printf("Sayıyı girin : ") ;
	scanf("%d", &Number) ;

	if(Number < 0)
	{
		printf("%d bir negatif sayıdır .\n", Number) ;
	}else if(Number > 0)
	{
		printf("%d bir pozitif sayıdır .\n", Number) ;
	}else if(Number == 0) 
	{
		printf("%d bir nötr sayıdır(yani 0'a eşittir) .\n", Number) ;
	}else 
	{
		printf("Sayı giriniz . \n") ;
	}

	return 0 ;
}
