Algoritmo selectiva
	Definir num, r, div Como Entero
	Leer num
	leer div
	r = num % div
	Si r = 0 Entonces
		Escribir "El numero " , num, " es divisible para ", div
	SiNo
		escribir "El numero ", num, " no es divible para " div
		num = 0
		Finsi
		
FinAlgoritmo
