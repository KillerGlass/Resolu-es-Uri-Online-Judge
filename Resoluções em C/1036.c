#include <stdio.h>
#include <math.h>

int main (){
 double a,b,c,del,x1,x2;
 scanf("%lf %lf %lf",&a,&b,&c);
 del= pow(b,2)-(4*a*c);
 if(del>0){
    del=sqrt(del);
    x1=(-b+del)/(2*a);
    x2=(-b-del)/(2*a);
	if((-b+del)==0 || (-b-del)==0)	{
		printf("Impossivel calcular\n");
	}else{
	    printf("R1 = %.5lf\n",x1);
	    printf("R2 = %.5lf\n",x2);
	}
 }else{
 	printf("Impossivel calcular\n");
 }
	
	return 0;
}