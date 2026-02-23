Proceso Ej34
	
	Definir secreto Como Entero
	Definir intento Como Entero
	
	secreto <- 7
	
	Repetir
		
		Escribir "Adivine el numero:"
		Leer intento
		
		Si intento < secreto Entonces
			Escribir "Muy bajo"
		SiNo
			Si intento > secreto Entonces
				Escribir "Muy alto"
			FinSi
		FinSi
		
	Hasta Que intento = secreto
	
	Escribir "Correcto"
	
FinProceso