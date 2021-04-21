#include <stdio.h>
 
int main() {
 	int e , i = 0, j,n, cont=0,m;
 	scanf("%d%d",&n,&j);
 	while (n--){
 		scanf("%d%d",&m,&e);
 		cont+=(e-m);
 		if (cont>j){

 			i = 1;
 		}

 	}
 	if (i){
 		printf("S\n");
 	}else{
 		printf("N\n");
 	}
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}