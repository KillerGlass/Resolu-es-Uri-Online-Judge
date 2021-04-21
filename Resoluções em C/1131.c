#include <stdio.h>
#include<stdlib.h>
int main (){
	int a,b,in=0,ge=0,em=0,i,j=0;
	while(1)
	{
	 scanf("%d %d",&a,&b);
	 j++;	
	 if(a>b){
		 in++;
	 }
	if(b>a){
		 ge++;
	 }
	 if(a==b){
		 em++;
	 }
	 	 while(1){
				
		   printf("Novo grenal (1-sim 2-nao)\n");
		   scanf("%d",&i);
			   if(i==1 || i==2){
				   break;
			   }
		}
		if(i==2){
			break;
		}
			
	}
	printf("%d grenais\n"
	   	   	"Inter:%d\n"
		   	"Gremio:%d\n"
		   	"Empates:%d\n",j,in,ge,em);
		   	if(in>ge){
		   	   	printf("Inter venceu mais\n");   
			   }
			   if(ge>in){
				  printf("Gremio venceu mais\n");  
			   }
	   	   	if(in==ge){
				  printf("Nao houve vencedor\n"); 	  
				  }
			
	return 0;
}