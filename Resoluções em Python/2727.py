while True:

	try:
		a = int(input())
		while a:
			a-=1
			s = input()
			cont = 0
			for i in s:
				if(i==' '):
					break
				cont+=1
				
			cont+=(s.count(' ') * 3)

			print("%c" % (cont+96))
	except:
		break

