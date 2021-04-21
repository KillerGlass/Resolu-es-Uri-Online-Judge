import math
def primo(n,div):
	div = int(math.sqrt(n))
	for i in range(2,div+1):
		if(n % i == 0):
			return False

		
	return True


m=int(input())
while m:
	m-=1
	n = int(input())

	if(n==2 or n==1):
		print('Prime')

	elif(primo(n,2)):
		print('Prime')
		
	else:
		print('Not Prime')
