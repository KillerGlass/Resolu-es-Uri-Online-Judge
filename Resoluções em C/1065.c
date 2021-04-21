#include <stdio.h>

int main ()
{
	int i,l=0,v[5];
	for(i=0;i<5;i++){
     	scanf("%d",&v[i]);
	}
	for(i=0;i<5;i++){
		if(v[i]%2==0){
			l++;
		}
	}
	printf("%d valores pares\n",l);
  return 0;
}