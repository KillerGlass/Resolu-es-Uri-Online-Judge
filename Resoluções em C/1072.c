#include <stdio.h>

int main ()
{
	int n,i,l=0,k=0;
	scanf("%d",&n);
	int v[n];
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
    for(i=0;i<n;i++){
    	if(v[i]>=10 && v[i]<=20){
    		l++;
		}else{
			k++;
		}
    }

	printf("%d in\n",l);
	printf("%d out\n",k);
     
  return 0;
}