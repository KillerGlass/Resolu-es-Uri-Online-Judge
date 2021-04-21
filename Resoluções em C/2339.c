#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ( ){
	int a,b,c;
	scanf("%d %c %d",&a,&b,&c);
	a*=c;
	if(b>=a){
		printf("S\n");
	}else{
		printf("N\n");
	}

	return 0;
}