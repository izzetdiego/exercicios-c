#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
	
	char str[20]= "teste";
	char str2[20]="eoda";
	strcpy(str,str2);
	printf("%s",str);
	return 0;
}
