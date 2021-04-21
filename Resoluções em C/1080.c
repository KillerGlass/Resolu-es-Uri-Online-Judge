#include <stdio.h>

int main ()
{
	int v[100],j,maior,pos,i,l=0;
	for(i=0;i<100;i++){
		scanf("%d",&v[i]);
	}
	maior=v[0];
	l=1;
	for(i=0;i<100;i++){
		if(maior<v[i]){
			maior=v[i];
			l=i+1;
		}
	}
    printf("%d\n%d\n",maior,l);

     
  return 0;
}
