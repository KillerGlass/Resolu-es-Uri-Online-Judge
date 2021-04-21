#include <stdio.h>
int main (){
    int a,b,s, maior;
    scanf("%d %d %d",&a,&b,&s);
    if(a>b){
    	maior=a;
    }else{
    	maior=b;
    }
    if(maior<s){
    	maior=s;
    }
    printf("%d eh o maior\n",maior);
	return 0;
}