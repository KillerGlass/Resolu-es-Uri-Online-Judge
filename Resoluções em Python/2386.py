n = int(input())
i = int(input())
cont = 0 
while i>0:
	c = int( input())
	if c*n>=40000000:
		cont+=1
	i-=1

print(cont)