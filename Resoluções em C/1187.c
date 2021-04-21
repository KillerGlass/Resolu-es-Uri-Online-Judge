#include <stdio.h>
int main (){
	int n=12, j, i,l=0;
	double m[n][n],soma=0;
	char O;
	scanf("%c",&O);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%lf", &m[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j || i+j==n-1){
		       
				}else{
					if(i<j && i+j<n){	
						
					 soma=soma+m[i][j];
			  }
				
			}		 
		
		}
		
	}

   if(O=='S'){
   		printf("%.1lf\n",soma);
   }
   if(O=='M'){
	   	
	   	printf("%.1lf\n",soma/30);
   }
	return 0;
}