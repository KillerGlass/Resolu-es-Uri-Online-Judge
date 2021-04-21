#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	int n, i, m, n1, aux;
	while(scanf("%d",&n) && n){
		aux = 0;
		for(i=0;i<n;i++){
			scanf("%d %d", &m,&n1);
			aux+= n1/2;
		}
		printf("%d\n",aux/2);
	}
	return 0;
}