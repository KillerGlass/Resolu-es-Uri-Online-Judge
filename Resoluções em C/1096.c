#include <stdio.h>
 
int main() {
   int i=1,j=7,l=1;
   for(i=1;i<=9;){
	   printf("I=%d J=%d\n",i,j);
	    	j--;
	   if(l==3){
		   i=i+2;
		   j=7;
		   l=0;
	   }
   	l++;
  
   }
 
    return 0;
}