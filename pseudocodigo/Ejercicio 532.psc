Proceso Ej532
	
	Definir opcion Como Entero
	Definir numero Como Entero
	
	Repetir
		
		Escribir "MENU"
		Escribir "1. Mostrar numeros del 1 al 10"
		Escribir "2. Mostrar numeros pares del 1 al 20"
		Escribir "3. Salir"
		Leer opcion
		
		Segun opcion Hacer
			
			1:
				Para numero <- 1 Hasta 10 Hacer
					Escribir numero
				FinPara
				
			2:
				Para numero <- 2 Hasta 20 Con Paso 2 Hacer
					Escribir numero
				FinPara
				
			3:
				Escribir "Saliendo..."
				
			De Otro Modo:
				Escribir "Opcion invalida"
				
		FinSegun
		
	Hasta Que opcion = 3
	
FinProceso