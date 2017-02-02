#! usr/bin/python3
#Ivan Hernandez Reyes
#Practica cero

#Para una serie de numeros a los multiplos de 3 imprimir fizz y para los 
#multiplos de 5 imprimir buzz, en ambos casos imprimir ambos fizzbuzz
num = range(0,31)

for n in num:
	if (n%3 == 0) and (n%5 == 0):
		print ('Fizz Buzz') 
	elif (n%3 == 0):
		print ('Fizz')
	elif (n%5 == 0):
		print ('Buzz')
	else:
		print (n)

