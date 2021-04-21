#include <stdio.h>
int a, b ;
int recurs(int *vector, int begin, int end, int item, int inter)
{
    int i = (begin + end) / 2;

    if (begin > end) { 
        return -1;
    }

    if ((vector[i] + inter) == item) {  
        return vector[i];
    }

    if ((vector[i] + inter) < item) { 
        return recurs(vector, i + 1, end, item, inter);


    } else {  
        return recurs(vector, begin, i - 1, item,inter);
    }
}

int main (){
	int ma, me=0 , n , k;
	scanf("%d",&n);
	int i, v[n];
	for(i=0;i<n;i++) scanf("%d",&v[i]);
	scanf("%d",&k);
	for (i=0;i<n;i++){
		ma = recurs(v,i,n-1,k,v[i]);
		if (ma>-1){
			me=v[i];
			break;
		}
	}

	printf("%d %d\n",me,ma);

	return 0;
}