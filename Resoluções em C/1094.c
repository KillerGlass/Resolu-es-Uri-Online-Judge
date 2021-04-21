#include <stdio.h>

int main (){
	char bix;
	float tot=0,co,p,po,pi;
	int i,n,cl=0,sa=0,ra=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%f %c",&co,&bix);
		tot=tot+co;
	
		if(bix=='C'){
			cl=cl+co;
		}
			if(bix=='S'){
			sa=co+sa;
		}
			if(bix=='R'){
			ra=ra+co;
		}
	}
	p=(cl*100)/tot;
	po=(sa*100)/tot;
	pi=(ra*100)/tot;
	printf("Total: %.0f cobaias\n",tot);
	printf("Total de coelhos: %d\n",cl);
	printf("Total de ratos: %d\n",ra);
	printf("Total de sapos: %d\n",sa);
	printf("Percentual de coelhos: %.2f %%\n",p);
	printf("Percentual de ratos: %.2f %%\n",pi);
	printf("Percentual de sapos: %.2f %%\n",po);
	return 0;
}