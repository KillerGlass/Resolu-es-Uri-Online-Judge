import math
a = int(input())
cont = 0
while(a>=2):
	a = a/2
	cont+=1

print("%.0f" % math.pow(4,cont))
