#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ( ){
	int a,c,d;
	char b;
	scanf("%d",&d);
	scanf("%d %c %d",&a,&b,&c);
	if(b=='+') a+=c;
	else a*=c;
	if(a>d) printf("OVERFLOW\n");
	else printf("OK\n");

	return 0;
}