#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
	FILE *fr;
	fr=fopen("num.txt", "r");
	int x, y, z, q;
	
	if(fr==NULL){
		printf("error");
		return 1;
	}
	else{ 
		fscanf(fr,"%d%d%d%d", &x, &y, &z, &q );
		
		if(x>y){
			if(x>z){
				if(x>q){
					printf("%d", x);
				}
				else{
					printf("%d", q);
				}
			}
			else{
				if(z>q){
					printf("%d",z);
				}
				else{
					printf("%d",q);
				}
			}
		}
		else{
			if(y>z){
				if(y>q){
					printf("%d", y);
				}
				else{
					printf("%d", q);
				}
			}
			else{
				if(z>q){
					printf("%d",z);
				}
				else{
					printf("%d",q);
				}
			}
		}
		
	}
		
		
	fclose(fr);
		

}
