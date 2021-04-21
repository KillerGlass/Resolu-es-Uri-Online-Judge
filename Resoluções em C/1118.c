#include <stdio.h>
#include<stdlib.h>
int main (){
		float a,b=0,s=0,soma,i=1,m;
	while(1){
	    if(i==1){
			 
		   scanf("%f",&a);
		   if(a>=0 &&a<=10){
		   	s++;
			   b=b+a;
		   }else{
			  printf("nota invalida\n"); 
		   }
		   if(s>=2){
			   soma=b/2;
			  printf("media = %.2f\n",soma);
			   
			   b=0;
		   }
		 }	
		if(s>=2){
			s=0;
			while(1){
				
		   printf("novo calculo (1-sim 2-nao)\n");
		   scanf("%f",&i);
			   if(i==1 || i==2){
				   break;
			   }
			}
		}
	   if(i==2){
		   return 0;
	   }
		 
			 
	}
	return 0;
}