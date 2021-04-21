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
  if( l >= (ax+ay)){
  	printf("NAO FORMA TRIANGULO\n");
  	return 0;
  }
  if(l*l==(ax*ax+ay*ay)){
     printf("TRIANGULO RETANGULO\n");
  }
   if(l*l>(ax*ax+ay*ay)){
     printf("TRIANGULO OBTUSANGULO\n");
  }
   if(l*l<(ax*ax+ay*ay)){
     printf("TRIANGULO ACUTANGULO\n");
  }
  if(a==b && b==c){
  	printf("TRIANGULO EQUILATERO\n");
  }
  if((a==b && b!=c) || (b==c && c!=a) || (c==a && c!=b)){
  	printf("TRIANGULO ISOSCELES\n");
  }
	return 0;
}