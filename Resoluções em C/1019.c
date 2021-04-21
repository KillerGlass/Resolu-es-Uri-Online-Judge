#include <stdio.h>

int main(){
	int n, h=0,m=0,s=0;
	scanf("%d",&n);
	m=n/60;
	h=m/60;
	m=m-h*60;
	s=n%60;
	printf("%d:%d:%d\n",h,m,s);

	return 0;
}