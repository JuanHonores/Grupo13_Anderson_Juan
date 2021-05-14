varA="Hola"
varB="mundo"
if type(varA)!= int:
	if type(varB)!=int:
		print ("string involucrado")
elif type(varB)==int:
	if varA>varB:
		print("mas grande")
	elif varA<varB:
		print("mas pequeño")
	else:
		print("igual")




