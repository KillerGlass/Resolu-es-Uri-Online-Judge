#include <stdio.h>
 
int main() {
 
   int a,b,c,d;
   scanf("%d",&d);
   scanf("%d %d %d",&a,&b,&c);
   if( a>=d && b>=d && c>=d)printf("S\n");
   else printf("N\n");
   
 
    return 0;
}