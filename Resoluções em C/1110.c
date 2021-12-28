#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 1, ini,fim, ind, num, i, j;
	scanf("%d", &n);
	while(n){
	

		int fila[n+1], aux[n+1];
		ini = fim = ind = 0;

		for( i = 0; i < n; i++)
			fila[i]= i+1;
		

		for(i = 0; i < n-1;i++){

			aux[i] = fila[ini];
			num = fila[ini+1];

			for(j = 2; j < n - i; j++){
				fila[ind] = fila[j];
				ind++;
			}

		fila[ind] = num;
		ind = 0;

	

		}
		printf("Discarded cards:");
		for( i = 0; i < n-2; i++)
			printf(" %d,",aux[i]);

		if (n > 1)
			printf(" %d",aux[n-2]);
		
		printf("\nRemaining card: %d\n",fila[ini]);

		scanf("%d", &n);

	}
}