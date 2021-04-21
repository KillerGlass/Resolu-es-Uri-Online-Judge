#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char c[31];
	int n =0;
	while(n<10){
		scanf("%s",c);
		if(n==2 || n==6 || n==8){
			printf("%s\n",c);
		}
		n++;
	}
	return 0;
}