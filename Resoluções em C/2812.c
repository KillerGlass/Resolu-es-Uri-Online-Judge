#include <stdio.h>
#include <stdlib.h>
int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}
int main (){
	int n,t,i,j,aux;;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		int v[t];
		for(i=0, aux =0;i<t;i++) {
			scanf("%d",&j);
			if(j%2==1){

			   v[aux]=j;
			   aux++;
			}
		}
		qsort(v, aux, sizeof(int), comparador);
		j=aux-1;
		i = 0;
		
		while(1){
			if(j<i){
				printf("\n");
				break;
			}
			if(j==i){
				if(aux==1) printf("%d\n",v[i]);
				else printf(" %d\n",v[i]);
				break;
			}
			if(i==0) printf("%d %d",v[j],v[i]);
			else printf(" %d %d",v[j],v[i]);

			i++;
			j--;
		}
		//if (aux==0)printf("\nh");
	}
	
	return 0;
}