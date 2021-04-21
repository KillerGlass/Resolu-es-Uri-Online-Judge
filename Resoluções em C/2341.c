#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ( ){
	int a,b;
	scanf("%d %d",&a,&b);
	int v[b], n, i, menor;

	for(i=0;i<b;i++) v[i]=0;

	for(i=0;i<a;i++){
		scanf("%d",&n);
		v[n-1]++;
	}

	menor = v[0];

	for(i=1;i<b;i++){
		
		if(menor>v[i]) menor=v[i];
	}

	printf("%d\n",menor);

	return 0;
}