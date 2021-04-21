#include <stdio.h>
int main (){
	int n,i,a,b,aux,ai,j,soma=0;
 
	while(1){
	
		scanf("%d %d",&a,&b);
		if(a==0 || b==0){
			return 0;
		}
	   if(a>0 && b>0){
		   printf("primeiro\n");
	   }
	    if(a<0 && b>0){
		   printf("segundo\n");
	   }
	    if(a<0 && b<0){
		   printf("terceiro\n");
	   }
	    if(a>0 && b<0){
		   printf("quarto\n");
	   }
	}
	return 0;
}