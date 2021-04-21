#include <stdio.h>
#include <stdlib.h>

int main (){
     int a , b ,c;
     scanf("%d %d %d",&a,&b,&c);

      if(((b-c) < a && a < (c+b) ) && ((a-c) < b && b < (a + c) )&& ((a - b ) < c && c < (a + b))) {
  
      		if(a==b && a == c) printf("Valido-Equilatero\n");
      		else if(a==b && b!=c || c==a && a!=b || b==c && c!=a) printf("Valido-Isoceles\n");
      		else if(a!=b && a!=c) printf("Valido-Escaleno\n");
      		if((a*a == (b*b+ c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))) 
      			printf("Retangulo: S\n");
	    	else 	printf("Retangulo: N\n");
	   

      }else{
      		printf("Invalido\n");
      }
	
	
	return 0;
}