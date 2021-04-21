#include <stdio.h>

int main ()
{
	int i,v,y,l=0;

		scanf("%d %d",&v,&y);
    for(i=v-1;i>y;i--){
    	if(i%2!=0){
    		l=l+i;
    	
    	}
    }

	printf("%d\n",l);
     
  return 0;
}