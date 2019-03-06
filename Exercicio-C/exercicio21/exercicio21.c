#include <stdio.h>
#include <stdlib.h>


int fatorial(int value){
	if(value==1){
		return 1;
	}
	return value*fatorial(value-1);
}


int  main(){

	
	int input=1;
	while(input>0){
		scanf("%i",&input);
		printf("\nO fatorial e: %i",fatorial(input));
	}
	return 0;
}
