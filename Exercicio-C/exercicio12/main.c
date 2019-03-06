#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,  qtd, menor,maior,entrada;
    printf("Digite a quantidade de numeros que vc deseja");
    scanf("%d",&qtd);
    for(i=0;i < qtd;i++){
        printf("\nDigite o numero que vc deseja");
        scanf("%d",&entrada);
        if(i==0){
            menor= entrada;
            maior= entrada;
        }
        if(menor > entrada){
            menor = entrada;
        }
        if(maior < entrada){
            maior= entrada;
        }
    }
    printf("\n%d, e o maior e %d",menor,maior);
    return 0;
}
