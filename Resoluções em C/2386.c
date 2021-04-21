#include <stdio.h>
 
int main() {
 
   long long n,i,m;
   int cont=0;
   scanf("%lld %lld",&n,&i);
   while(i--){
   	scanf("%lld",&m);
   	if(n*m>=40000000) cont++;
   }
   printf("%d\n",cont);
 
    return 0;
}