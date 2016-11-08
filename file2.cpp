#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
	
	FILE *fr ,*fw;
	fr=fopen("skuska.txt", "r");
	fw=fopen("code2.txt", "w");
	
	if(fw==NULL){
		printf("error");
		return 1;
	}
	
	if(fr==NULL){
		printf("error");
		return 1;
	}
	else{
		char c;
		while((c=fgetc(fr))!=EOF){
			c=~c;
			fputc(c, fw);
		}
		printf("Successfully!");
		fclose(fr);
		fclose(fw);
	}

}
