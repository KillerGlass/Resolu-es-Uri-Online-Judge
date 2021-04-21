#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int a;
	while(scanf("%d",&a)==1){

	if(a>=180 && a<270) printf("Boa Noite!!\n");
	else if(a>=270 && a<360) printf("De Madrugada!!\n");
	else if(a>=90 && a<180) printf("Boa Tarde!!\n");
	else printf("Bom Dia!!\n");

	}
	return 0;
}