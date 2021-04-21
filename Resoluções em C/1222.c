#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)==3){
		char m[a][100];
		int cont=0,aux=0,i,linha =0;
		for(i=0;i<a;i++) scanf("%s",m[i]);

		for(i=0;i<a;i++){
			cont+=strlen(m[i]);
			aux = strlen(m[i]);
		
			if (cont+1!=c+1){
				cont+=1;
				aux+=1;
			}
		
			
			if (cont==c){
				cont = 0;
				linha+=1;

			}else if (cont>c){
				linha+=1;
				cont=aux;

			}

		}
		if (cont){
			linha+=1;
		}
		aux = (float) linha/b;
		
		if(linha%b) aux++;

		printf("%d\n",aux);
		

	}
	return 0;
}