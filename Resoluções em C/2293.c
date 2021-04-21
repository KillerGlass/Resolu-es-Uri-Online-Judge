#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ( ){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	int m[a][b],soma = 0,cont;
	for(i=0;i<a;i++){
		cont = 0;
		for(j=0;j<b;j++){
			scanf("%d",&m[i][j]);
			cont+=m[i][j];
		}
		if(soma<cont) soma = cont;
	}

	for(i=0;i<b;i++){
		cont=0;
		for(j=0;j<a;j++){
			cont+=m[j][i];
		}
		if(soma<cont) soma = cont;
	}
	printf("%d\n",soma);
	return 0;
}