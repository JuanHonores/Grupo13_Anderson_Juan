num1 = int(input("Ingrese el primer numero: "))
num2 = int(input("Ingrese el segundo numero: "))
calc1= num1*num1
calc2= num2*num2
if num2==calc1:
	print("El segundo es el cuadrado exacto del primero")
if num2<calc1:
	print("El segundo es menor que el cuadrado del primero")
if num2>calc1:
	print("El segundo es mayor que el cuadrado del primero")

