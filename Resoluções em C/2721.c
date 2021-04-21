#include <stdio.h>
#include <stdlib.h>

int main (){
	char *s[] = {"Rudolph","Dasher","Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen"};
	int n,cont=0,i = 9;
	while(i--) scanf("%d",&n) , cont+=n;
	cont%=9;
	printf("%s\n",s[cont]);
	
	return 0;
}