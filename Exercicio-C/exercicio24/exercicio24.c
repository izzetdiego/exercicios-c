#include <stdio.h>
#include <stdlib.h>


int  main(){

	int i;
	char input[20],caracter;
	gets(input);
	scanf("%c",&caracter);
	for(i=0;i< sizeof(input);i++){
		if(input[i]== caracter){
			printf("%i",&input[i]);
			break;
		}
		
	}
	
	return 0;
}
