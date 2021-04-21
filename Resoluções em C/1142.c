#include <stdio.h>
#include<stdlib.h>
int main (){
  int i,j,n,k=1;;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   for(j=0;j<3;j++){
	   	   	printf("%d ",k);
		  k++; 
	   }
	   k++;
	   printf("PUM\n");
   }
	return 0;
}