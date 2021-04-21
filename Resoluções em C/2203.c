#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
     int a,b,c,d,e,f,g;
     double d1, d2;
     while(scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g)!=EOF){
	     d1 = sqrt(pow((a-c),2) + pow((b-d),2)) + (e*1.5);
	     d2 = f+g;
	     //printf("%d %d\n",a,f);
	     if(d2>=d1) printf("Y\n");
	     else printf("N\n");

     }
	
	
	return 0;
}