#include <stdio.h>
int main (){
  float sal,au,por;
  scanf("%f",&sal);
  if(sal>=0 && sal<=400){
  	por=(sal*15)/100;
  	sal=sal+por;
  	au=15;
  	 printf("Novo salario: %.2f\n",sal);
  printf("Reajuste ganho: %.2f\n",por);
  printf("Em percentual: %.0f %\n",au);
	return 0;
  }
  if(sal>400 && sal<=800.0){
  	por=(sal*12)/100;
  	sal=sal+por;
  	au=12;
  	 printf("Novo salario: %.2f\n",sal);
  printf("Reajuste ganho: %.2f\n",por);
  printf("Em percentual: %.0f %\n",au);
	return 0;
  }
  if(sal>800.0 && sal<=1200.0){
  	por=(sal*10)/100;
  	sal=sal+por;
  	au=10;
  	 printf("Novo salario: %.2f\n",sal);
  printf("Reajuste ganho: %.2f\n",por);
  printf("Em percentual: %.0f %\n",au);
	return 0;
  }
  if(sal>1200.0 && sal<=2000.0){
  	por=(sal*7)/100;
  	sal=sal+por;
  	au=7;
  	 printf("Novo salario: %.2f\n",sal);
  printf("Reajuste ganho: %.2f\n",por);
  printf("Em percentual: %.0f %\n",au);
	return 0;
  }
  if(sal>2000){
  	por=(sal*4)/100;
  	sal=sal+por;
  	au=4;
  	 printf("Novo salario: %.2f\n",sal);
  printf("Reajuste ganho: %.2f\n",por);
  printf("Em percentual: %.0f %\n",au);
	return 0;
  }
  
	return 0;
}