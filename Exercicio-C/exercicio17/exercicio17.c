#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i;
	float faixa1=0,faixa2=0,faixa3=0,faixa4=0;
	float medias[4];
	float somatoria1,somatoria2,somatoria3,somatoria4;
	struct Pessoa{
		int idade;
		float peso;
	};
	struct Pessoa pessoas[20];
	for(i=0;i<15;i++){
		printf("\nDigite a idade");
		scanf("%i",&pessoas[i].idade);
		printf("\nDigite o peso");
		scanf("%f",&pessoas[i].peso);
		if(pessoas[i].idade >=1 && pessoas[i].idade <=10 ){
			faixa1++;
			somatoria1+= pessoas[i].peso;
		}
		if(pessoas[i].idade >=11 && pessoas[i].idade <=20 ){
			faixa2++;
			somatoria2+= pessoas[i].peso;
		}
		if(pessoas[i].idade >=21 && pessoas[i].idade <=30 ){
			faixa3++;
			somatoria3+= pessoas[i].peso;
		}
		if(pessoas[i].idade >30 ){
			faixa4++;
			somatoria4+= pessoas[i].peso;
	
		}	
	}
	
	printf("\nMedia 1-10: %f",somatoria1/faixa1);
	printf("\nMedia 11-20: %f",somatoria2/faixa2);
	printf("\nMedia 21-30: %f",somatoria3/faixa3);
	printf("\nMedia acima de 30: %f",somatoria4/faixa4);
	
	return 0;
}
