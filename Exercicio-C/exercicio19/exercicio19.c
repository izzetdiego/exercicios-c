#include <stdio.h>
#include <stdlib.h>


int  main(){

	int input=1,somatoria=0;
	while(input >0){
		scanf("%i",&input);
		if(input > 100 && input <200){
			somatoria++;
		}
	}
	printf("Total de numeros %i",somatoria);
	return 0;
}
