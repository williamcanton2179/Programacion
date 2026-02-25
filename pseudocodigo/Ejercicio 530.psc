Proceso Ej530
	
	Definir capital, tasa, total Como Real
	Definir anio Como Entero
	
	capital <- 1000
	
	Para tasa <- 0.05 Hasta 0.10 Con Paso 0.01 Hacer
		
		Escribir "Tasa: ", tasa
		Escribir "Anio    Monto"
		
		Para anio <- 1 Hasta 10 Hacer
			total <- capital * (1 + tasa) ^ anio
			Escribir anio, "     ", total
		FinPara
		
		Escribir "----------------------"
		
	FinPara
	
FinProceso