#include <stdio.h>

int main (){
   float a,b,c,d,soma,n;
   scanf("%f %f %f %f",&a,&b,&c,&d);
   soma= (a*2+b*3+c*4+d*1)/10;
   if(soma>=7.0){
   	printf("Media: %.1f\n",soma);
	printf("Aluno aprovado.\n");
   } 
   if(soma<=4.9){
   	printf("Media: %.1f\n",soma);
	printf("Aluno reprovado.\n");
   }
   if(soma<7.0 && soma>4.9){
   	  printf("Media: %.1f\n",soma);
   	  printf("Aluno em exame.\n");
   	  scanf("%f",&n);
   	  printf("Nota do exame: %.1f\n",n);
   	  soma=(soma+n)/2;
   	  if(soma>=5.0){
   	  	printf("Aluno aprovado.\n");
   	  	printf("Media final: %.1f\n",soma);
   	  }else{
   	  	printf("Aluno reprovado\n");
   	  	printf("Media final: %.1f\n",soma);
   	  }

   }
	
	return 0;
}
