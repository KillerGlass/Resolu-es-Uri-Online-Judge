a = int(input())
l = list(map(int,input().split()))
b = int(sum(l)/2)
c = 0

for i in range(len(l)):
	c+=l[i]

	if(c==b):
		break

print(i+1)
