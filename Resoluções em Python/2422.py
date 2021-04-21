def recurs(l, begin,end, item, inter):

	i = int((begin + end) / 2)

	if (begin > end): 
		return -1


	if ((l[i] + inter) == item):
		return l[i]


	if ((l[i] + inter) < item): 
		return recurs(l, i + 1, end, item, inter)


	else:  
		return recurs(l, begin, i - 1, item,inter)

n = int(input())
l = []
a = n
while a:
	l.append(int(input()))
	a-=1



k = int(input())
for i in range(len(l)):
	ma = recurs(l,i,n-1,k,l[i])
	if ma>-1:
		a = l[i]
		break;
	
print(a,ma)
