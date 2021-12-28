#include <stdio.h>
#include <stdlib.h>

int main()
{
	char v[1000],b[1000];
	int num, n,i,j,g,c,aux;
	scanf("%d",&num);
	while(num){
		n = 1;
		while(n){

			for(i =0; i<num;i++){
				scanf("%d",&v[i]);
					if(!v[i] && !i){
						n = 0;
						break;
					}

			}
			for(i = g = c = 0, j = num; i<num;i++){
			
				if(v[i] == num){
					num--;
				}else{
					for(c = 1;c <=g;g++){
						aux = 
						b[c] = b[c-1];
					}
					b[g] = v[i];
				}
				if(b[0] == num)
			}


		}
		scanf("%d",&num);
	}

	return 0;
}

