#include <stdio.h>
int main ()
{
	int i,v;
    scanf("%d",&v);
    int n[v];
    for(i=0;i<v;i++){
    	scanf("%d",&n[i]);
    }
    for(i=0;i<v;i++){
    	
    	if(n[i]%2==0  && n[i]>0){
    		printf("EVEN POSITIVE\n");
    	}
    	if(n[i]%2!=0 && n[i]>0){
    		printf("ODD POSITIVE\n");
    	}
    	if(n[i]%2==0 && n[i]<0){
    		printf("EVEN NEGATIVE\n");
    	}
    	if(n[i]%2!=0 && n[i]<0){
    		printf("ODD NEGATIVE\n");
    	}
    	if(n[i]==0){
    		printf("NULL\n");
    	}
    }


     
  return 0;
}
