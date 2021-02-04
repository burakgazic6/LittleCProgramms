#include <stdio.h>

int main(){
	int firstNumber, secondNumber, process ;

	printf("Wellcome to Calculamator!\n Press First Number : ") ;
	scanf("%d", &firstNumber ) ;

	printf("Press Second Number : ") ;
	scanf("%d", &secondNumber) ;

	printf("Choose The Process (sum = 1, sub = 2, mul = 3, truediv = 4, mod = 5): ") ;
	scanf("%d", &process) ;

	if(process == 1){
		printf("Answer = %d \n", (firstNumber+secondNumber)) ;
	}
	else if(process == 2){
		printf("Answer = %d \n", (firstNumber-secondNumber)) ;
	}
	else if(process == 3){
		printf("Answer = %d \n", (firstNumber*secondNumber)) ;
	}
	else if(process == 4){
		printf("Answer = %d \n", (firstNumber/secondNumber)) ;
	}
	else if(process == 5){
		printf("Answer = %d \n", (firstNumber%secondNumber)) ;
	}else {
		printf("Some Problems... \n") ;
	}


	return 0 ;
}
