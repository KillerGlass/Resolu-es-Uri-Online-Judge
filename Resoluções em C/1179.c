#include <stdio.h>
int main (){
   int par[5], im[5], i, num[15],k=0,j=0;
   for(i=0;i<15;i++){
   		scanf("%d", &num[i]);
   }
   for(i=0;i<15;i++){
      if(num[i]%2==0){
        par[k]=num[i];
        k++;
      }else{
        im[j]=num[i];
        j++;
      }
      if(k>=5){
        for(k=0;k<5;k++){
          printf("par[%d] = %d\n",k,par[k]);
        }
          k=0;
      }
      if(j>=5){
        for(j=0;j<5;j++){
          printf("impar[%d] = %d\n",j,im[j]);
        }
        j=0;
      }
   	}
    for(i=0;i<j;i++){
          printf("impar[%d] = %d\n",i,im[i]);
        }
    for(i=0;i<k;i++){
        printf("par[%d] = %d\n",i,par[i]);
    }
     
	return 0;
}
