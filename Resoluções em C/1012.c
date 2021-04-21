#include <stdio.h>

int main (){
	float a,b,c, tr,ci,re,ta,q;
	scanf("%f %f %f",&a,&b,&c);
	tr=(a*c)/2;
	ci= (c*c)* 3.14159;
	ta= ((a+b)/2)*c;
	q=b*b;
	re=a*b;
	printf("TRIANGULO: %.3f\n",tr);
	printf("CIRCULO: %.3f\n",ci);
	printf("TRAPEZIO: %.3f\n",ta);
	printf("QUADRADO: %.3f\n",q);
	printf("RETANGULO: %.3f\n",re);

	return 0;
}
