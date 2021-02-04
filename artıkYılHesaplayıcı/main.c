#include <stdio.h>

int main() {

	int year ;

	printf("Press Year : ") ;
	scanf("%d", &year) ;

	if(year%4 == 0 ){
		if(year%100  == 0){
			if(year%400 == 0){
				printf("Artık yıldır .\n") ;
			}else {
				printf("Artık yıl değildir .\n") ;
			}
		}
		else {
				printf("Artık yıldır .\n") ;
		}
	}else {
		printf("Artık yıl değildir .\n") ;
	}
	
	


	return 0 ;
}

/*#include <stdio.h>*/

/*int main()*/
/*{*/
    /*int year;*/

    /*printf("Bir yıl girin: ");*/
    /*scanf("%d",&year);*/

    /*if(year%4 == 0)*/
    /*{*/
        /*if( year%100 == 0)*/
        /*{*/
            /*// yıl 400 ile bölünebilir, dolayısıyla yıl artık yıl*/
            /*if ( year%400 == 0)*/
                /*printf("%d artık yıldır.", year);*/
            /*else*/
                /*printf("%d artık yıl değildir.", year);*/
        /*}*/
        /*else*/
            /*printf("%d artık yıldır.", year );*/
    /*}*/
    /*else*/
        /*printf("%d artık yıl değildir.", year);*/
    
    /*return 0;*/
/*}*/
