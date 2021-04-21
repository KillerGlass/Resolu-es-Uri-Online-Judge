#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	float n,cont=0;
	scanf("%f",&n);
	while(n>=2){
		n=n/2;
		cont++;
	}
	printf("%.0f\n",pow(4,cont));


	return 0;
}