#include <stdio.h>
#include <stdlib.h>

int main (){
	int n,m, a ,i , j;
	while(scanf("%d%d",&n,&m)==2) {
		int m1[n][m];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){

			scanf("%d",&a);
			if(a==1) m1[i][j]=9;
			else m1[i][j]=0;
		}
		int cont=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if( m1[i][j]==9) printf("9");
				else{
					if( i && m1[i-1][j]==9) cont++;
					if( m1[i][j+1]==9 && j<m-1) cont++;
					if( m1[i+1][j]==9 && i<n-1) cont++;
					if( j && m1[i][j-1]==9) cont++;
					printf("%d",cont);
					cont=0;


				}

			}
			printf("\n");
		}

	}
	
	return 0;
}