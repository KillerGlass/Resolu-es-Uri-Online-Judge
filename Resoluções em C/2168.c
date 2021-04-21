#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
     int n,i,j, cont=0;
     scanf("%d",&n);
     int m[n+1][n+1];
   
     for(i=0;i<n+1;i++)
     	for(j=0;j<n+1;j++){
     		scanf("%d",&m[i][j]);
     	}	
     for(i=1;i<=n;i++){

	 	for(j=1;j<=n;j++){
	 		if(m[i][j]==1) cont++;
	 		if(m[i-1][j]==1) cont++;
	 		if(m[i][j-1]==1) cont++;
	 		if(m[i-1][j-1]==1) cont++;

	 		if(cont<2) printf("U");
	 		else printf("S");
	 		cont=0;
	 		
	 	}	
	 	printf("\n");
     }
	return 0;
}