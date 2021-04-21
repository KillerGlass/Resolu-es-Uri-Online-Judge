from functools import reduce
n = int(input())

soma = lambda x,y:x+y
x = list(map(int,(input().split())))
x = sum(x)
if(n>3):
	n/=2
if(n==3):
	n=2
if(n==1):
	x+=1
print(int(x/n))
			
		
