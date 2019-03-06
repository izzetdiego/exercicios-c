#include <stdio.h>
#include <stdlib.h>


int  main(){

	
	int i,input,count=0;
	scanf("%i",&input);
	for(i=1;i<=input;i++){
		if(input % i ==0){
			count++;
		}
	}
	
	if(count==2){
		printf("E primo");
	}else{
		printf("Nao e");
	}
	
	return 0;
}
