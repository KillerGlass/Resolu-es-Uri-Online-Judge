#include <stdio.h>


int main (){
   char nome[100];
   double sal,mon;
   scanf("%s",nome);
   scanf(" %lf %lf",&sal,&mon);
   mon= (mon*15)/100;
   sal=sal+mon;
   printf("TOTAL = R$ %.2lf\n",sal);
	return 0;
}