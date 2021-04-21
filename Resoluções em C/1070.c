#include <stdio.h>

int main ()
{
	int i,v,l=0;

		scanf("%d",&v);
	
	for(i=v;i<=v+12;i++){
		if(i%2==1){
            printf("%d\n",i);
            l++;
            if(l==6){
            	break;
            }
		}
	}
     
  return 0;
}
