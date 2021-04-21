#include <stdio.h>
int main (){
	int n,i,a,b,aux,ai,j,soma=0;

	while(1){
		soma=0;
		scanf("%d %d",&a,&b);
		if(a<=0|| b<=0){
			return 1;
		}
		if(a<b){
			aux=a;
			ai=b;
		}else{
			aux=b;
			ai=a;
		}
		
		for(i=aux;i<=ai;i++){
		printf("%d ", i);
				soma+=i;
			}
		
	printf("Sum=%d\n",soma);
	
	}
	return 0;
}