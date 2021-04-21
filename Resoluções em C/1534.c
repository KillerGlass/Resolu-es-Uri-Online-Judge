#include <stdio.h>
int main (){
	int ma[70][70],i,j,n;
	while(scanf("%d",&n)!=EOF){
         for(i=0;i<n;i++){
         	for(j=0;j<n;j++){
         		ma[i][j]=3;
         	}
         }
         for(i=0;i<n;i++){
         	for(j=0;j<n;j++){
         		if(i==j){
         			ma[i][j]=1;
         		}
         		if(i+j==n-1){
         			ma[i][j]=2;
         		}
         	}
         }
         for(i=0;i<n;i++){
         	for(j=0;j<n;j++){
         		printf("%d",ma[i][j]);
         	}
         	printf("\n");
         }
	}
	return 0;
}