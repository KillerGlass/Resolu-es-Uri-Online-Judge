#include <stdio.h>


int main (){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	a/=2;
	b/=3;
	c/=5;
	if (a<b && a<c) printf("%d\n", a);
	else if (b<a && b<c) printf("%d\n", b);
	else printf("%d\n",c );
	
	return 0;
}