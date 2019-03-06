#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    float nums[15];
    for(i=0;i <15; i++){
        scanf("%f",&nums[i]);
    }
    for(i=0;i <15; i++){
        printf("\n%f",sqrt(nums[i]));
    }
    return 0;
}
