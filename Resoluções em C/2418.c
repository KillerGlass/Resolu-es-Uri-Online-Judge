#include <stdio.h>


int main (){
	float v[5],cont = 0, maior, menor;
	int i;
	for(i=0;i<5;i++) scanf("%f",&v[i]), cont+=v[i];
	maior = menor = v[0];
	for (i = 0; i<5;i++){
		if(v[i]>maior) maior = v[i];
		if(v[i]<menor) menor = v[i];
	}
	printf("%.1f\n",cont-(maior+menor));

	return 0;
}