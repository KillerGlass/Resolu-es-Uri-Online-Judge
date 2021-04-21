#include <stdio.h>
int main(){
	int i,j,n,m,gol,l=0,f=0;
	scanf("%d %d",&n,&m);
	int ma[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(ma[i][j]!=0){
               l++;
			}
		}
		if(l==m){
			f++;
		}
		l=0;
	}
	printf("%d\n",f);
	return 0;
}