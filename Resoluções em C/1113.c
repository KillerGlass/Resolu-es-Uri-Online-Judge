#include <stdio.h>
int main (){
	int n,i,a,b,aux,ai,j,soma=0;

	while(1){
	
		scanf("%d %d",&a,&b);
		if(a==b){
			return 1;
		}
		if(a<b){
			printf("Crescente\n");
		}else{
			printf("Decrescente\n");
		}
	}
	return 0;
}