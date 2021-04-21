#include <stdio.h>


int comparar(char *a,char *b);
typedef struct 
{
	char animal[15];
}ele;

int main (){
	ele g[3],h;

	scanf("%s",g[0].animal);
	scanf("%s",g[1].animal);
	scanf("%s",g[2].animal);
	if(comparar (g[0].animal,"vertebrado")==0){
   		 if( comparar ( g[1].animal,"ave")==0){
               if(comparar (g[2].animal,"carnivoro")==0){
                  	printf("aguia\n");
                  }
                  if(comparar (g[2].animal,"onivoro")==0){
                  	printf("pomba\n");
                  }
   		 }
		 if(comparar (g[1].animal,"mamifero")==0){
				 if(comparar (g[2].animal,"onivoro")==0){
                  	printf("homem\n");
                  }
                  if(comparar (g[2].animal,"herbivoro")==0){
                  	printf("vaca\n");
                  }
			}
		}
	if(comparar (g[0].animal,"invertebrado")==0){
		if(comparar (g[1].animal,"anelideo")==0){
		
                 if(comparar (g[2].animal,"hematofago")==0){
                  	printf("sanguessuga\n");
                  
                  }
                 if(comparar (g[2].animal,"onivoro")==0){
                  	printf("minhoca\n");
                  }
	 }
	
          if(comparar (g[1].animal,"inseto")==0){
                 if(comparar (g[2].animal,"hematofago")==0){
               
                  	printf("pulga\n");
                  }
                 if(comparar (g[2].animal,"herbivoro")==0){
                 	
                  	printf("lagarta\n");
                  }
	      
	 }

		}
	
	return 0;

}
int comparar(char *a,char *b){
	int i=0;
	while(a[i]!= '\0' || b[i]!='\0' ){
			if(a[i]!=b[i]){
				return 1;
			}
			i++;
		}
	return 0;
}