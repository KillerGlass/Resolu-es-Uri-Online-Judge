#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char c[10],a[3],b[3],d[3];
	scanf("%s",c);
	a[0]=c[0], a[1]=c[1],a[2]=0;
	b[0]=c[3], b[1]=c[4],b[2]=0;
	d[0]=c[6],d[1]=c[7],d[2]=0;
	printf("%s/%s/%s\n",b,a,d);
	printf("%s/%s/%s\n",d,b,a);
	printf("%s-%s-%s\n",a,b,d);
	return 0;
}