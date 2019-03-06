#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main(){

	int i,nums[10];
	for(i=0;i<10;i++){
		scanf("%d",&nums[i]);
		if(nums[i] > 0){
			continue;
		}else{
			i--;
		}
	}
	for(i=0;i<10;i++){
		printf("\n Raiz: %f",sqrt(nums[i]));
		
	}
	
	return 0;
}
