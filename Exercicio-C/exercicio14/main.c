#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int tamanho;
    char nome[50];
    printf("Digite o nome\n");
    scanf("%s",&nome);
    for(i=1; i<=50;i++){
        if(*(nome+i)==  NULL){
           tamanho= i;
           break;
        }
    }
    for(i=0;i<tamanho;i++){
        printf("\n%s",nome);
    }
    return 0;
}
