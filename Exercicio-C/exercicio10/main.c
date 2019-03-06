#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,y;
    float celsius;
    printf("digite o valor de inicio");
    scanf("%d",&i);
    printf("digite o valor de fim");
    scanf("%d", &y);
    for(i;i<=y;i++){
        celsius= (5*(i-32))/9 ;
        printf("\n%f",celsius);
    }
    return 0;
}
