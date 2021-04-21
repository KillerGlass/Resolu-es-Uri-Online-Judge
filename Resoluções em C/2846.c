#include <stdio.h>
#include<stdlib.h>

int main (){
	int i, n, ant = 3, atu = 2,aux, j,num = 4;
	scanf("%d",&n);
	for(i=0;i<n;){
		for(num=atu;num<ant-1 && i<n;i++,num++){
			
			//printf("      %d == %d\n",num, i);
		}
		aux=ant;
		ant+=atu;
		atu=aux;

		
	}
	printf("%d\n",num);

  	return 0;
}