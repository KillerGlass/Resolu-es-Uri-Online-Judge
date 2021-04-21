#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ( ){
	int i,j,m[501][501],t,cont=0;
    for( i=0;i<501;i++){
    	for(j=0;j<501;j++) m[i][j]=0;
    }
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&i,&j);
		m[i][j]++;

		if(m[i][j]>1){
			cont=1;
			//return 1;
		  
		 }
		}
	if (cont) printf("1\n");
	else printf("0\n");

	return 0;
}