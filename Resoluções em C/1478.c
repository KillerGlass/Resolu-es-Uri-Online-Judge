#include <stdio.h>
int main (){
	int ma[100][100],i,j=0,v=2,w,n,x=0;
	do{
	scanf("%d",&n);
		if(n>0 && n<=100){
	     	for(i=0;i<n;i++){
	     		for(j=0;j<n;j++){
	     				ma[i][j]=1;
	     		}
	     	}
				for(i=0;i<n;i++){
					x=i+1;
					for(j=0;j<n;j++){	
						
						if(i<j){
							ma[i][j]=v;
							
							v++;
						}
						if(i>j){
							ma[i][j]=x;
							x=x-1;
						}
					}
						v=2;
				}
		    for(i=0;i<n;i++){
		    	for(j=0;j<n;j++){
		    		if(j==0){
		    			printf("%3d",ma[i][j]);
		    		}else{

		    		printf(" %3d",ma[i][j]);
		    		}
		    	}
		    	printf("\n");
		    }
		    printf("\n");
				v=2; 
				 x=0;
		}
		}while(n!=0);
	return 0;
}