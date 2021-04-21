#include <stdio.h>

int main (){
	int i, l=0;
	float v[6],med=0;
	for(i=0;i<6;i++){
		scanf("%f",&v[i]);
	}
	for(i=0;i<6;i++){
	   if(v[i]>0){
	      med=med+v[i];
	      l++;
	   }
	}
	printf("%d valores positivos\n",l);
	printf("%.1f\n",med/l);

	return 0;
}