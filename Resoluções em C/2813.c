#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main (){
	char s[10], s1[10];
	int n, casa , esc ,dc,de;
	scanf("%d",&n);
	casa = esc  = dc = de = 0;
	while(n--){
		scanf(" %s %s",s,s1);
		if(strcmp(s,"chuva")==0){
			if(dc>0) dc--, de++;
			else{
				de++;
				casa++;
			}

		}
		

		if(strcmp(s1,"chuva")==0){
		
			if(de>0) de--,dc++;
			else{
				dc++;
				esc++;
			}
		}

	}
	printf("%d %d\n",casa,esc);

 	return 0;
}


