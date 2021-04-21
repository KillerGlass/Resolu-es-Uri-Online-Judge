#include <stdio.h>

int main (){
	int i,n,m=1,b=0,c=0;
	scanf("%d",&n);
	int v[n],a[n];
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
        a[i]=0;
	}
	for(i=0;i<n-1;i++){
		if(v[i]!=v[i+1]){
			if(v[i]<v[i+1]){
				a[i]=1;
		}else{
           a[i]=2;
		}

		}else{
			m=0;
			break;
		}
		
	}
	  for(i=0;i<n-1;i++){
	  	if(a[i]==a[i+1]){
	  		m=0;
	  		break;
	  	}
	  }

	printf("%d\n",m);
	return 0;
}