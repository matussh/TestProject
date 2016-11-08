#include <stdio.h>
#include <math.h>

main(){
	int a;
	printf("zadajte cislo");
	scanf("%d", &a);
	
	if(a%2==0 ){
					if(a%3==0){
						printf("Toto cislo je delitelne c. 3 aj c. 2 ");
					}
					else{
						printf("Toto cislo je delitelne c. 2 ");
					}
	}
	else{
		if(a%3==0){
					printf("Toto cislo je delitelne c. 3");
		}
		else{
			printf("Toto cislo nie je delitelne c. 3 ani c. 2");
		}
	}
	getchar();
	getchar();
	return 0;
}
