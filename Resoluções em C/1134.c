#include <stdio.h>
#include<stdlib.h>
int main (){
   	int a,ga=0,di=0,al=0;
   while(1){
     scanf("%d",&a);
     if(a==1){
		 al++;
	 }
	 if(a==2){
		 ga++;
	 }
	 if(a==3){
		 di++;
	 }
	 if(a==4){
		 break;
	 }
	   
   }
    printf("MUITO OBRIGADO\n"
			"Alcool: %d\n"
			"Gasolina: %d\n"
			"Diesel: %d\n",al,ga,di);
	return 0;
}