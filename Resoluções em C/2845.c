#include <stdio.h>
#include <stdlib.h>

int main (){
	int n,i,x,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		c+=x;
	}
	if(n>3) n/=2;
	if(n==3) n=2;
	if(n==1) c++;

	printf("%d\n",c/n);
	return 0;
}