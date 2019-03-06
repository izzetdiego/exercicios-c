#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum;
    for(i=1;i <=100; i++){
        printf("\n%d",i);
        sum+=i;
    }
    printf("\n%d",sum);
    return 0;
}
