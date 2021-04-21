n = int(input())
l = []
while n:
	l.append(int(input()))
	n-=1
l1 = list(set(l))
print(len(l1))