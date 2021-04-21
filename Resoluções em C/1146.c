#include <stdio.h>

int main(){
	int a=0,b,aux,i,j;
	do{
		if(a!=0){
		   	printf("\n");	
		}
		scanf("%d",&a);
		for(i=1;i<=a;i++){
				printf("%d",i);
				if(i<a){
					printf(" ");
				}
			}
		
	}while(a!=0);
	return 0;
}