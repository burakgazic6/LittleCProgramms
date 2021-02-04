#include <stdio.h>

int main() {
	int Number, Answer=1;

	printf("Faktöriyelini Bulma!\n Faktöriyelini almak istediğiniz sayıyı girin : ") ;
	scanf("%d", &Number) ;

	if(Number != 0){
		for(int i = 1; i<=Number ; i++){
			Answer *= i ;
		}
	}else {
		printf("Sonuç : %d \n", 0) ;
	}

	printf("Sonuç : %d \n", Answer) ;

	return 0 ;
}
