#include <stdio.h>


int main (){
   int a,b,c,d;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   a=a*b;
   c=c*d;
   d=a-c;
   printf("DIFERENCA = %d\n",d);
	return 0;
}