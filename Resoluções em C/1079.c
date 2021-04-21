#include <stdio.h>
int main ()
{
    
    int i,m,j;
    scanf("%d",&m);
    float n[m][3],med;
    for(j=0;j<m;j++){
       for(i=0;i<3;i++){
       	scanf("%f",&n[j][i]);
       }
    }
       
	for(i=0;i<m;i++){
	  med=(n[i][0]*2+n[i][1]*3+n[i][2]*5)/10;
	  printf("%.1f\n",med);
	}
	    

     
  return 0;
}
