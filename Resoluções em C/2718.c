#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int con2 (int *v, long long int n){
    int i=0;
    while(n){
      v[i]=n%2;
      i++;
      n=n/2;
    }
    return i;
}
int main (){
     int i,j,v[100], cont=0, maior=0,m;
     long long n;
     scanf("%d",&m);
     while(m--){
	     scanf("%lld",&n);
	     j = con2(v,n);
	     for(i=0;i<j;i++){
	     	if(v[i]==1){
	     		cont++;
	     	
	     	}else{
				if(maior<cont) maior=cont;
				cont=0;
	     	}

	     } 
	    if(maior<cont) maior=cont;
	   
	     printf("%d\n",maior);
     	  cont=0;
     	  maior=0;
     }
	return 0;
}