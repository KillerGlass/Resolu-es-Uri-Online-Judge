def sete ( l):
	s = '0'
	for i in str(l):
		if i == '7':
			s+='0'
			
		else :
			s+=i

	return int(s)

l = input().split()

s1 = sete(l[0])
s2 = sete(l[2])

soma = 0
if l[1] == '+':
	soma = s1 + s2
elif l[1] == 'x':
	soma = s1 * s2

somado = sete(str(soma))
if somado == 7:
	print('0')
else:
	print(somado)


