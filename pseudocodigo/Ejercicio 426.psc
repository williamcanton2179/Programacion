Proceso Ej26
	
	Definir n, d1, d2, d4, d5 Como Entero
	
	Escribir "Ingrese numero de 5 digitos:"
	Leer n
	
	d1 <- Trunc(n / 10000)
	d2 <- Trunc(n / 1000) MOD 10
	d4 <- Trunc(n / 10) MOD 10
	d5 <- n MOD 10
	
	Si d1 = d5 Y d2 = d4 Entonces
		Escribir "Es palindromo"
	SiNo
		Escribir "No es palindromo"
	FinSi
	
FinProceso