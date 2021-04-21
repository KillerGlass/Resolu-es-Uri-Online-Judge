#include <stdio.h>
#include<stdlib.h>
int main (){
     int i,ax,az, a,b,flag=0;
     scanf("%d %d",&a,&b);
     if(a>b){
		 ax=b;
		 az=a;
	 }else{
		ax=a;
		az=b; 
	 }
	 for(i=ax;i<=az;i++){
		 if(i%13!=0){
			 flag=flag+i;
		 }
	 }
	 printf("%d\n",flag);
	return 0;
}