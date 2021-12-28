sal = float(input())


if( sal<=400.0):
	por = (sal*15)/100
	au = 15


if(sal>400.0 and sal<=800.0):
	por = (sal*12)/100
	au = 12



if(sal>800.0 and sal<=1200.0):
	por = (sal*10)/100
	au= 10



if(sal>1200.0 and sal<=2000.0):
	por = (sal*7)/100
	au = 7



if(sal>2000.0):
	por = (sal*4)/100
	au = 4

print("Novo salario: {:.2f}".format(sal + por)) 
print("Reajuste ganho: {:.2f}".format(por) )
print("Em percentual:", au, "%")




