Proceso Ej516
	
	Definir capital, tasa, total Como Real
	Definir anio Como Entero
	
	Escribir "Ingrese capital inicial:"
	Leer capital
	
	Escribir "Ingrese tasa (ejemplo 0.05):"
	Leer tasa
	
	Para anio <- 1 Hasta 10 Hacer
		total <- capital * (1 + tasa) ^ anio
		Escribir "Anio ", anio, ": ", total
	FinPara
	
FinProceso