#include <stdio.h>
 
int main() {
 	int e ,n, cont=0,m;
 	scanf("%d",&n);
 	while (n--){
 		scanf("%d%d",&m,&e);
 	
 		if (m>e){

 			cont += e; 
 		}

 	}
 	printf("%d\n",cont);
 
 
    return 0;
}