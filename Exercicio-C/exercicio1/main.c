#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int nums[5];
    for( i=0;i < 5; i++){
        scanf("%d",&nums[i]);

    }
    for( i=0;i < 5; i++){
        printf("\nQuadrado %d",nums[i]*nums[i]);
    }

    return 0;
}
