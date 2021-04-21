/*#include <stdio.h>
int main()
{
	int A,B,x;
	scanf("%d %d",&A,&B);
	x=A+B;
	printf("X = %d\n",x);
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s[100],a[100];
	scanf("%s",s);
	int i = 0, m = 0, j = 0;
	while(s[i]!='+' && s[i]!='-'){
			a[j]=s[i];
			i++;
			j++;
		}
		a[j] = 0;
		m = atoi(a);
		printf("%s\n",a);
	return 0;
}

