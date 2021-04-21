#include <stdio.h>
int main (){
   float a,b;
   scanf("%f %f",&a,&b);
   if(a==0 && b==0){
   	printf("Origem\n");
   }
   if(a>0 && b>0){
  	 	printf("Q1\n");
   }
   if(a<0 && b<0){
  	 	printf("Q3\n");
   }
   if(a>0 && b<0){
  	 	printf("Q4\n");
   }
   if(a<0 && b>0){
  	 	printf("Q2\n");
   }
   if(a==0 && b>0){
  	 	printf("Eixo Y\n");
   }
   if(a==0 && b<0){
   		printf("Eixo Y\n");
   }
   if(a>0 && b==0){
   	printf("Eixo X\n");
   }
   if(b==0 && a<0){
     	printf("Eixo X\n");
   }

	return 0;
}