#include <stdio.h>

int main (){
   int a,b,c,aux,l,k;
   scanf("%d %d %d",&a,&b,&c);
 
   if(a<b){
      if(a<c){
      	aux=a;
      	if(c<b){
      		l=c;
      		k=b;
      	}else{
      		l=b;
      		k=c;
      	}
      }else{
      	aux=c;
	      l=a;
	      k=b;
      }
   }else{
   	  if(b<c){
   	  	aux=b;
   	  	if(c<a){
   	  		l=c;
   	  		k=a;
   	  	}else{
   	  		l=a;
   	  		k=c;
   	  	}
   	  }else{
   	  	aux=c;
   	  	if(b<a){
   	  		l=b;
   	  		k=a;
   	  	}else{
   	  		l=a;
   	  		k=b;
   	  	}
   	  }
   }
	printf("%d\n%d\n%d\n",aux,l,k);
	printf("\n%d\n%d\n%d\n",a,b,c);


	return 0;
}