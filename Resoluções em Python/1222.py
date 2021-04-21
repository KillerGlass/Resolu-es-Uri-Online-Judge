import math
while True:
	try:
		a,b,c = map(int,input().split())
		l = input().split()
		linha = 0
		pag = cont = d = e = 0
		for i in l:
			#print(" {} == {}".format( cont, linha))
			cont+=len(i)
			aux = len(i)
			if(d<a-1):
				if cont+1!=c+1:
					cont+=1
					aux+=1
			
			
			#print(cont)
			if cont==c:
				cont = 0
				linha+=1
			elif cont>c:
				linha+=1
				cont=aux

		if cont:
			linha+=1
			d+=1
			
		pag = linha/b
		pag = math.ceil(pag)

		print(pag)
	
	except:
		break
