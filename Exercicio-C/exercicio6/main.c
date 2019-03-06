#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float nums[10];
    for(i=1;i <10; i++){
        scanf("%f",&nums[i]);
    }
    for(i=1;i <10; i++){
        printf("\n%f",nums[i]/2);
    }

    return 0;
}
