#include <stdio.h>
#include <stdlib.h>


int main(){
	
	char frase[100];
	int i;
	gets(frase);
	for(i=0;i<100;i++){
		if(frase[i]=='a'){
			frase[i]= 'x';
		}
		if(frase[i]=='e'){
			frase[i]='y';
		}
		if(frase[i]=='i'){
			frase[i]='w';
		}
		if(frase[i]=='o'){
			frase[i]='k';
		}
		if(frase[i]=='u'){
			frase[i]='z';
		}
	}
	printf("%s",frase);
	return 0;
}
