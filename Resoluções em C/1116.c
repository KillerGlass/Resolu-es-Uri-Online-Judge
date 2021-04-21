#include <stdio.h>
int main (){

	
	float a,b,aux,ai,j,soma=0;
	int i=0,n;
	scanf("%d",&n);
	while(i<n){
		scanf("%f %f",&a,&b);

		
	    
	    if(b==0){
		printf("divisao impossivel\n");	
		}else{
			aux=(float)a/b;
	   	   printf("%.1f\n",aux);
		}
	i++;
	}
	
	return 0;
}