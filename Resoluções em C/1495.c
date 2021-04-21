#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
#include <ctype.h>
// teste ok, falta o debug e o forum ;)
void quick_sort(int a[][2], int left, int right) {
    int i, j, x, y,w;
     
    i = left;
    j = right;
    x = a[(left + right) / 2][1];
     
    while(i <= j) {
        while(a[i][1] < x && i < right) {
            i++;
        }
        while(a[j][1] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i][1];
            a[i][1] = a[j][1];
            a[j][1] = y;
            w = a[i][0];
            a[i][0]=a[j][0];
            a[j][0]=w;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}




int main (){
	int i,n,m;
	while(scanf("%d %d",&n,&m)==2){
		int v[n][2],j,aux;
		
		for(i=0;i<n;i++)
			 scanf("%d %d",&v[i][0],&v[i][1]);
		
		quick_sort(v,0,n-1);
	
	
		//rodar um for para verificar se há como obter vitorias
		int cont=0;
			for(i=0;i<n;i++){
			 if(v[i][0]<=v[i][1] && m){
				if(v[i][0]+m>=v[i][1] && m){
					aux=(v[i][1]-v[i][0]) + 1;
					if(aux<= m){
						cont+=3;
						m-= aux;
					}else{
						cont++;
						m-=(aux-1);
					}
				}
			}else if( v[i][0]>v[i][1]) {
				cont+=3;
			} else if(v[i][0]==v[i][1]) cont++;
		}
		printf("%d\n",cont);
		
	
	}
   
   
    return 0;
}

