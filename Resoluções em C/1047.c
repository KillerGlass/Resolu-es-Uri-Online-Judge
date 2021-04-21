#include <stdio.h>
int main (){
   int a,b,i,c,d,j;
   scanf("%d %d %d %d",&a,&c,&b,&d);
  
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
   if(c==d){
   	j=0;
   }else{
   	if(c<d){
   		j=d-c;
   	}
   	if(c>d){
   		c=60-c;
   		j=c+d;
   	}
   }
   if(j>30){
   	i=i-1;
   }else{
   	if(a==b && j>0){
   		i=0;
   	}
   }
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,j);
	return 0;
}