while True:
	aux = 0
	n = int(input())
	if n == 0 :
		break
	for i in range(0,n):
		n,m = map(int,input().split())
		aux += int(m/2)

	print(int(aux/2))
