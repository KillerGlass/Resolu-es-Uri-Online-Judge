#include <stdio.h>
 
int main() {

   float i=0,j=1,m=1.2,f=0.2;
   int l=1,h=10,k=10,d=2,s=1;
   for(i=0;i<2.1; ){
   	fflush(stdin);
  	 	if(i!=1 && i<2 && i!=0){
   	      printf("I=%.1f J=%.1f\n",i,j);
		   
	   }else{
	  
		   printf("I=%.0f J=%.0f\n",i,j);
	   }
	 	 j++;
		   if(k==3){
		   	i=i+0.2;
	        j=m+f;
	        f=f+0.2;
	        k=0;
	     
		   }
		   if(i==1){
		  
			   h=0;
	
			   j=d;
			   d++;
			   h=0;
	//	  printf("I=%.0f %.0f\n",i,j);
		   }
		   if(i==2){
		   	s++;
			   d=3;
			   j=d;
			   d++;
			
	  //	  printf("I=%.0f dd%.0f\n",i,j);
		   }
	 
	   if(l==3){
		   j=1.2;
	  
		   i=i+0.2;
		k=0;
	   }
   k++;
   h++;

   l++;
   }
 
    return 0;
}