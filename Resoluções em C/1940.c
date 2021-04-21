#include <stdio.h>
int main (){
	int j,r, i,k, maior,l=1;
	scanf("%d %d",&j,&r);
	int ma[r][j],v[j];
	for(i=0;i<r;i++){
		for(k=0;k<j;k++){
			scanf("%d",&ma[i][k]);
			v[k]=0;
		}
	}
	for(i=0;i<r;i++){
		for(k=0;k<j;k++){
            v[k]=v[k]+ma[i][k];
		}
	}
	maior=v[0];
	for(i=0;i<j;i++){
			if(maior<=v[i]){
				maior=v[i];
				l=i+1;
			}
	}
	
	printf("%d\n",l);

	return 0;
}