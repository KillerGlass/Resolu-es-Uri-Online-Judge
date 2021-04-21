#include <stdio.h>
#include <string.h>

int recur (int *s,int d, int v, int i){
	//printf("    %d\n",i);
	if (i == v) return 1;
	if (s[i]==d) return 0;
	else return recur(s,d,v,i+=1);

}

int main (){
	int n,  c = 0;
	scanf("%d",&n);
	int s[n], d, i = 1 , j;
	scanf("%d",&s[0]);	
	for (c =0; c<n-1;c++){
		scanf("%d",&d);
		j = recur(s,d,i,0);
	//	printf("     %d\n",j);
		if (j){
			s[i]=d;
			i++;
		}

	}
	//for (c = 0; c<i;c++) printf("        %d\n",s[c]);
	printf("%d\n",i);
	
	return 0;
}