#include <stdio.h>
int main (){
	int c,c1,u,u1;
	double soma,p,p1;
	scanf("%d %d %lf",&c,&u,&p) ;
	scanf("%d %d %lf",&c1,&u1,&p1);
	soma=(u*p) + (u1*p1);
	printf("VALOR A PAGAR: R$ %.2lf\n",soma);
	return 0;
}
