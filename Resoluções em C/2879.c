#include <stdio.h>
int main( ){
    int i,s,l=0;
    scanf("%d",&s);
    int nu[s];
    for(i=0;i<s;i++){
       scanf("%d",&nu[i]);
       if(nu[i] != 1){
          l++;
       }
    }
    printf("%d\n",l);
  return 0;
}