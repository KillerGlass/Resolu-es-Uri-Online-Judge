#include <stdio.h>
int main (){
	int n=12, j, i;
	float m[n][n],soma=0;
	char es;
	scanf("%c",&es);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f", &m[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j || i+j==n-1){
				}else{
					if(i>j && i+j>=n){
						soma+=m[i][j];
					}
			}

		}
	}
   if(es=='S'){
   		printf("%.1f\n",soma);
   }
   if(es=='M'){
	   	soma=soma/2;
	   	printf("%.1f\n",soma);
   }
	return 0;
}