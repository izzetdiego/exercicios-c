#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior ,nums[5];
    for (i=0; i<5;i++){
        printf("\nDigite o numero");
        scanf("%d",&nums[i]);
        if(i==0){
            maior = nums[i];
        }
        if(maior < nums[i]){
            maior= nums[i];
        }
    }
    printf("\n%d e o maior",maior);
    return 0;
}
