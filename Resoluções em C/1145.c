#include <stdio.h>

int main(){
	int a,b,aux,i,j;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;){
		for(j=1;j<=a;j++){
			printf("%d",i);
			if(i==b){
				printf("\n");
				return 0;
			}
			i++;
			if(j<a){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}