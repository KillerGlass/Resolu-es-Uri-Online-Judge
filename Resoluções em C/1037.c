#include <stdio.h>

int main (){
	double i,n,v,t;
	scanf("%lf",&n);
	if(n>=0 && n<=25.00){
     printf("Intervalo [0,25]\n");
	}
	if(n>25.0 && n<=50.00){
     printf("Intervalo (25,50]\n");
	}
	if(n>50.00 && n<=75.00){
     printf("Intervalo (50,75]\n");
	}
	if(n>75.00 && n<=100.00){
     printf("Intervalo (75,100]\n");
	}
	if(n<0 || n>100.00){
		printf("Fora de intervalo\n");
	}
	return 0;
}