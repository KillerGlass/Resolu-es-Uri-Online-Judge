#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	int a,b=0,c=0,i;
	scanf("%d",&a);
	int v[a];
	for(i=0;i<a;i++) scanf("%d",&v[i]), b+=v[i];
	b/=2;
	for(i=0;c!=b;i++) c+=v[i];

	
	printf("%d\n",i);


	return 0;
}