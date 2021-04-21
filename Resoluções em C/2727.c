#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int a,cont, i,br;
	char s[51];
	while(scanf("%d",&a)==1){

		while(a--){
			scanf(" %[^\n]s",s);
			i = cont = br = 0;
			while(s[i]){
				if(s[i]=='.' && br==0) cont++;
				if(s[i]==' ') br++;
				i++;
			}
			cont+=(br*3);
			printf("%c\n",96+cont);
		}

	}
	return 0;
}