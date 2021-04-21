l = int(input())
l1 = list(map(int,input().split()))
if (l1[0]>=l and l1[1]>=l and l1[2]>=l):
	print('S')
else:
	print('N')