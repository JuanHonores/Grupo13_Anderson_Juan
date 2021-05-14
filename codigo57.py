import math
from decimal import *
getcontext().prec = 1500
def Calculo(k):
	sumatoria= Decimal((1/(16**(k)))*(4/(8*k+1)-2/(8*k+4)-1/(8*k+5)-1/(8*k+6)))
	return sumatoria
pi=0
for i in range(0,100000):
	pi=pi + Calculo(i)
print (pi)
