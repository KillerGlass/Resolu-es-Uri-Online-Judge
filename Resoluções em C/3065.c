#include <stdio.h>
#include<stdlib.h>

int main (){
  int x1,x2,y1,y2,x,y , i,n, j = 1;
  while (scanf("%d%d%d%d",&x1,&x2,&y1,&y2) &&x1 && x2 && y1 &&y2){
        scanf("%d",&n);
        int total = 0;
        for (i = 0 ; i<n;i++){

            scanf("%d%d",&x,&y);
            if(x>=x1 && x<=x2 && y<=y1 && y>=y2) total++;
        }
        printf("Teste\n%d\n%d\n",j,total);
        j++;
  }
  	return 0;
}