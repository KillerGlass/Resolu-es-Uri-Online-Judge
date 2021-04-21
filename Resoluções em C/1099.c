#include <stdio.h>
int main (){
	int n,i,a,b,aux,ai,j,soma=0;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		soma=0;
		scanf("%d %d",&a,&b);
		if(a<b){
			aux=a;
			ai=b;
		}else{
			aux=b;
			ai=a;
		}
			
		for(i=aux+1;i<ai;i++){
			if(i%2!=0){
				soma+=i;
			}
		}
	printf("%d\n",soma);
	
	}
	return 0;
}