#include <stdio.h>

int main (){
    int ma[15][15],i,j=0,v=1,n,x,y=0,t,m;
	do{
		scanf("%d",&n);
		if(n>0 && n<=15){
			x=1;
			for(i=0;i<n;i++)
            {
				for(j=0;j<n;j++)
                {	
					ma[i][j]=x;
					x=x*2;
				}
				v=v*2;
				x=v;
			}
            t=ma[n-1][n-1];
            while(t!=0){
                y++;
                t=t/10;
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++){
                    if(j == 0)
                    {
                        printf("%*d",y,ma[i][j]);
                    }
                    else
                    {
                        printf(" %*d",y,ma[i][j]);
                    }
                }
                printf("\n");
            }
			v=1;	
			printf("\n");  
		    y=0;
        }
	}while(n != 0);
 return 0;
}