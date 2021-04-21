#include <stdio.h>
int main (){
	long long int n,a,c,ci,vi,d,cc,dd,u;
	scanf("%lld",&n);
	a=n;
	c=n/100;
	n=n%100;
	ci=n/50;
	n=n%50;
	vi=n/20;
	n=n%20;
    d=n/10;
    n=n%10;
    cc=n/5;
    n=n%5;
    dd=n/2;
    n=n%2;
    u=n/1;
    n=n%1;
    printf("%lld\n",a);
    printf("%lld nota(s) de R$ 100,00\n",c);
    printf("%lld nota(s) de R$ 50,00\n",ci);
    printf("%lld nota(s) de R$ 20,00\n",vi);
    printf("%lld nota(s) de R$ 10,00\n",d);
    printf("%lld nota(s) de R$ 5,00\n",cc);
    printf("%lld nota(s) de R$ 2,00\n",dd);
    printf("%lld nota(s) de R$ 1,00\n",u);
	
	return 0;
}