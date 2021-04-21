#include <stdio.h>

int main( ){
float v[6];
int i,l=0;
     for(i=0;i<6;i++){
     	scanf("%f",&v[i]);
     }
	for(i=0;i<6;i++){
		if(v[i]>0){
	      l++;
		}
	}
	printf("%d valores positivos\n",l);
}