Proceso Ej18
	
	Definir num Como Entero
	Definir mayor Como Entero
	Definir i Como Entero
	
	Escribir "Ingrese numero:"
	Leer mayor
	
	Para i <- 2 Hasta 10 Hacer
		Escribir "Ingrese numero:"
		Leer num
		
		Si num > mayor Entonces
			mayor <- num
		FinSi
	FinPara
	
	Escribir "Mayor: ", mayor
	
FinProceso