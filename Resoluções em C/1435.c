#include <stdio.h>
int main (){
	int ma[100][100],i,j,v=1,w,n,x=0,z;
	do{
		scanf("%d",&n);
	    z=n;
	    if(n>0 && n<=100){

		    for(w=0;w<n;w++){
				for(i=x;i<z;i++){
					for(j=x;j<z;j++){
						if(i==x || i==z-1 || j==x || j==z-1){
						    ma[i][j]=v;
						}
					}
				}
		      v++;
		      x++;
		      z--;
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
		    z=n;
			x=0;
			v=1;
	    }
	}while(n !=0);
	return 0;
}