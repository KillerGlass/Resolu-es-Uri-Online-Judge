#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main (){
 	char s[21],s1[21];
 	int i=0;
 	scanf(" %s %s",s,s1);
 	while(s[i] && s1[i]){
 		//printf("%c\n",s[i])
 		if(s[i]<s1[i]){
 			printf("%s\n%s\n",s,s1);
 			return 0;
 		}
 		if(s[i]>s1[i]){
 			printf("%s\n%s\n",s1,s);
 			return 0;
 		}
 		i++;
 	}
 	if(strlen(s)<strlen(s1)){
		printf("%s\n%s\n",s,s1);	
 	}else{
 		printf("%s\n%s\n",s1,s);

 	}
  	return 0;
}


