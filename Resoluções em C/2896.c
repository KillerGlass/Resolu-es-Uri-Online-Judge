#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main (){
 	int a,b,c;
 	scanf("%d",&c);
 	while (c--){
	 	scanf("%d %d",&a,&b);
	 	if(a>=b) a = (a%b) + (a/b);
	 	printf("%d\n",a);

 	}
  	return 0;
}


