#include <stdio.h>
int main (){
  float a,b,c, v,l,ax,ay;
  scanf("%f %f %f",&a,&b,&c);
  if(a>b){
  	l=a;
  	ay=b;
  }else{
  	l=b;
  	ay=a;
  }
  if(l>c){
     ax=c;
     
  }else{
  	l=c;
  	ax=a;
  	ay=b;
  }
  	if((ax+ay)>l){
         v=a+b+c;
   		printf("Perimetro = %.1f\n",v);
        return 0;
  		}
  
  	 v=((a+b)/2)*c;
 printf("Area = %.1f\n",v);
	return 0;
}