#include <stdio.h>
#include <stdlib.h>

int main()
{
   int somatoria=0, i , entrada,quad;
   for (i=0; i<20; i++){
        printf("Digite o numero\n");
        scanf("%d",&entrada);
        quad= entrada*entrada;
        if(quad < 225){
            somatoria+= entrada;
        }
   }
    printf("\n a somatoria e: %d",somatoria);
    return 0;
}
