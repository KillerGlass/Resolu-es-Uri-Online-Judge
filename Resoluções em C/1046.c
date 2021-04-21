#include <stdio.h>
int main (){
   int a,b,i;
   scanf("%d %d",&a,&b);
  
   if(b==a){
   	i=24;
   }else{
	   if(a<b){
         i=b-a;
	   }
	   if(a>b){
          a=24-a;
          i=a+b;
	   }

   }
   printf("O JOGO DUROU %d HORA(S)\n",i);
	return 0;
}