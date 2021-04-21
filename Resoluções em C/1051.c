#include <stdio.h>

int main (){
  float valor,e,n,tot=0;
  scanf("%f", &valor);

  e=valor;
  if(valor>=0 && valor<=2000){
    printf("Isento\n");
  }else{
       e=valor-2000;
       n=e;
       if(e>1000){
         n=1000;
       }
       tot=tot+(n*8)/100;
       e=e-n;
       n=e;
       if(e>0){
         if(e>1500){
          n=1500;
         }
         tot=tot+(n*18)/100;
       
         e=e-n;
        
          if(e>0){
             tot=tot+(e*28)/100;
             n=(e*28)/100;
             
          }
       } 
    printf("R$ %.2f\n",tot);
  }
 
	return 0;
}