#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	int a,b=1,c=0,i;
	scanf("%d",&a);
	int v[a];
	for(i=0;i<a;i++) scanf("%d",&v[i]);

	for(i=1;i<a;i++){
			
		if(v[i]==v[i-1]) b++;
		else{
			if(b>c) c=b;
			b=1;
		}
	}
	if(b>c) c=b;
	printf("%d\n",c);
	

	return 0;
}