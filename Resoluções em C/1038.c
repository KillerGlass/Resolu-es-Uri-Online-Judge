#include <stdio.h>

int main (){
	int a,b;
	float soma=0;
	scanf("%d %d",&a,&b);
	if(a==1){
       soma=4*b;
	}
	if(a==2){
       soma=4.50*b;
	}
	if(a==3){
       soma=5*b;
	}
	if(a==4){
       soma=2*b;
	}
	if(a==5){
	   soma=1.50*b;
	}
	
  printf("Total: R$ %.2f\n",soma);

	
	return 0;
}
