#include <stdio.h>
int main(){
	int a1,a2,a3,an, i,soma[3], maior;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	for(i=0;i<3;i++){
		if(i==0){
	      soma[0]=a1*0+a2*2+a3*4;  
		}
		if(i==1){
	      soma[1]=a1*2+a2*0+a3*2; 
		}
		if(i==2){
	      soma[2]=a1*4+a2*2+a3*0;  
		}
	}
	maior=soma[0];
	for(i=0;i<3;i++){
		if(soma[i]<maior){
			maior=soma[i];
		}
	}
		printf("%d\n",maior);
	return 0;
}