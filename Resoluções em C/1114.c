#include <stdio.h>
int main (){
	int n,i,a,b,aux,ai,j,soma=0;
      a=2002;
	while(1){
	
		scanf("%d",&b);
		if(a==b){
			printf("Acesso Permitido\n");
			return 1;
		}else{
			printf("Senha Invalida\n");
		}
	}
	return 0;
}