#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mercado{
	char ali[51];
	int qtd;
	float pre;
}el;


typedef struct mercado feira;

int main()
{

	int n,qtd_ali, pre_ali, i, j;
	float soma = 0;
	scanf("%d", &n);
	while(n--){

		scanf("%d",&pre_ali);
		feira prod[pre_ali];

		for(i = 0; i < pre_ali; i++)
			scanf(" %s %f", prod[i].ali, &prod[i].pre);

		scanf("%d",&qtd_ali);
		feira ida[qtd_ali];


		for(i = 0; i < qtd_ali; i++){
			scanf(" %s %d", ida[i].ali, &ida[i].qtd);

			for(j = 0; j < pre_ali; j++){
				
				if(strcmp(prod[j].ali,ida[i].ali)==0){
					soma += prod[j].pre * ida[i].qtd;
					//printf("R$ %.2f\n",soma);
					pre_ali--;
					prod[j] = prod[pre_ali];
					break;
				}

			}

		}


		printf("R$ %.2f\n",soma);
		soma = 0 ;

	}
}
	