#include <stdio.h>
#include<stdlib.h>

int main (){
 	long long n,r;
	scanf("%lld",&n);
	r = 1 + (((n-1)*n)/2) + (((n)* (n - 1) *(n - 2 )* (n - 3))/24);
	printf("%lld\n",r);
  	return 0;
}


