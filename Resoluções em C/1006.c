#include <stdio.h>


int main (){
   float A,B,C,soma;
   scanf("%f %f %f",&A,&B,&C);
   A= A*2;
   B=B*3;
   C=C*5;
   soma=(A+B+C)/10;
   printf("MEDIA = %.1f\n",soma);
	return 0;
}