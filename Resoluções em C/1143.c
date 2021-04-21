#include <stdio.h>
#include<stdlib.h>
int main (){
  	int i,b,j,n,k=1;
	  scanf("%d",&n);
   for(i=1;i<=n;i++){
	   for(j=0;j<3;j++){
	   	b=i;
	   	printf("%d",k);
	   	k=k*b;
	   	if(j<2){
		 printf(" ");
        }
	   }
	   printf("\n");
	   k=i+1;
   }return 0;
}