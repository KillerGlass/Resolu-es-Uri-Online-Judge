#include<stdlib.h>
int main (){
	float a,b=0,s=0,soma,i=0,media;
	while(1){
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
		   i++;
	   }
	   if(i!=0){
		   return 0;
	   }
	   	
	}
	return 0;
}
