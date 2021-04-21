#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ( ){
	int i,j,n, m1,t, x,y, n1, cont, h, k, aux;
	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);	
		int m[n][62];

		for(j=0;j<n;j++){
			
			scanf("%d",&m1);
			aux = 0;
			for(i=0;i<m1;i++) {
				h = 1;
				 scanf("%d",&n1);

				for(k=0;k<aux;k++){
					if(m[j][k]==n1) {
						h = 0;
						break;
					}

				}

				if(h) m[j][aux] = n1, aux++;
			}

			m[j][aux] = -1;
			//printf("%d\n", aux);

		}

		//for(i=0;m[0][i]!=-1;i++) printf(" %d ",m[0][i]);

		scanf("%d",&m1);
		
		
		for(i=0;i<m1;i++){
			j = k = cont = h = 0;

			scanf("%d%d%d",&n1,&x,&y);
		

			if(n1==1){

				for(j=0;m[x-1][j]!=-1;j++){

					for(k=0;m[y-1][k]!=-1;k++){

						if(m[x-1][j]==m[y-1][k]){
							cont++;
							//printf("%d ",m[x-1][j]);
							break;
						}
					} 			
				}
				
				
			}else{	
				h = 0;

				for(j=0;m[x-1][j]!=-1;j++){
					

					for(k=0;m[y-1][k]!=-1;k++){

						
						if(m[x-1][j]==m[y-1][k]){
							h++;
							//printf("entrou\n");
							break;

						} 

					//if(h==0) cont++;
				}
					}
					for(k=0;m[y-1][k]!=-1;k++);
					cont=  (j+k) - h;
					//printf("%d =j %d\n",j,k);

			}
				printf("%d\n",cont);

		}
	}
	return 0;
}