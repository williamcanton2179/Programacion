Proceso Ej520
	
	Definir numero, suma, contador Como Entero
	Definir promedio Como Real
	
	suma <- 0
	contador <- 0
	
	Escribir "Ingrese numeros (0 para terminar):"
	Leer numero
	
	Mientras numero <> 0 Hacer
		suma <- suma + numero
		contador <- contador + 1
		Leer numero
	FinMientras
	
	Si contador > 0 Entonces
		promedio <- suma / contador
		Escribir "Promedio: ", promedio
	SiNo
		Escribir "No se ingresaron datos."
	FinSi
	
FinProceso