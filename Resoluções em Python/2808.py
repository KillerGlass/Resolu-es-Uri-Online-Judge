def g (a):
	if a=='a':
		return 1
	if a=='b':
		return 2
	if a=='c':
		return 3
	if a=='d':
		return 4
	if a=='e':
		return 5
	if a=='f':
		return 6
	if a=='g':
		return 7
	if a=='h':
		return 8




a,b = input().split()
x = g(a[0])-g(b[0])
y = int(a[1])-int(b[1])
if abs(x*y) == 2:
	print("VALIDO")
else:
	print("INVALIDO")