#include <stdio.h>


int main (){
   int num,h;
   double reais,preco;
   scanf("%d %d",&num,&h);
   scanf(" %lf",&preco);
   reais=h*preco;
   printf("NUMBER = %d\n",num);
   printf("SALARY = U$ %.2lf\n",reais);
	return 0;
}