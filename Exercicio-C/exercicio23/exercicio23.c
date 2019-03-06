#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  main(){

	
	char input1[30],input2[30];
	gets(input1);	
	gets(input2);
	if(strstr(input1,input2)==NULL){
		return NULL;
	}else{
		char *p;
		p= strstr(input1,input2);
		printf("%i",p);
	}
	
	return 0;
}
