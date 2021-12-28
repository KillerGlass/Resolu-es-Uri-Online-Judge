#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, n1,n2,d1,d2, num, den, mai, men, mdc;
	char op, r;
	scanf("%d", &n);
	while(n--){
		
		scanf("%d %c %d %c %d %c %d",&n1,&r,&d1,&op,&n2,&r,&d2);

		//printf("%c\n",op);

		switch(op){
			case '+':
				num =  (n1*d2 + n2*d1); 
				den =  (d1*d2);
				break;
			case '-':
				num =  (n1*d2 - n2*d1); 
				den =  (d1*d2);
				break;
			case '*':
				num =  (n1* n2); 
				den =  (d1*d2);
				break;

			case '/':
				num =  (n1* d2); 
				den =  (d1*n2);
				break;
	
		}
		n2 = num;
		d2 = den;

		if (num < 0) num *= -1;
		if (den < 0) den*= -1;

		if(num == 0 || den == 0){

			if(num > 0) num/=num;
			if(den > 0) den/=den; 


			if (n2 < 0) num = num * -1;
			if (d2 < 0) den = den* -1;

			printf("%d/%d = %d/%d\n",n2,d2,num,den);
			
			continue;

		}

		if (num > den)
			mai = num, men = den;
		else
			men = num, mai = den;

		n1 = 0;
		//printf("%d %d\n",mai, men);
		while(1){
			d1 = mai%men;
			mai = men;
			men = d1;
			//printf("bq %d %d\n",mai, men);

			if (men == 0){
				if (n1 == 0)
					mdc = mai;
				break;
			} 

			mdc = men;
		}
		//printf("Mdc = %d\n",mdc);

		if (num % mdc == 0 && den % mdc == 0){
				
			num = num / mdc;
			den = den / mdc;


			if (n2 < 0) num = num * -1;
			if (d2 < 0) den = den* -1;

			printf("%d/%d = %d/%d\n",n2,d2,num,den);
		}
		else
			printf("%d/%d = %d/%d\n",n2,d2,n2,d2);


	}
}