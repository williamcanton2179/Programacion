Proceso Ej16
	
	Definir cuenta Como Entero
	Definir saldo Como Real
	Definir cargos Como Real
	Definir creditos Como Real
	Definir limite Como Real
	Definir nuevo Como Real
	
	Escribir "Cuenta (-1 para salir):"
	Leer cuenta
	
	Mientras cuenta <> -1 Hacer
		
		Escribir "Saldo:"
		Leer saldo
		
		Escribir "Cargos:"
		Leer cargos
		
		Escribir "Creditos:"
		Leer creditos
		
		Escribir "Limite:"
		Leer limite
		
		nuevo <- saldo + cargos - creditos
		
		Escribir "Nuevo saldo: ", nuevo
		
		Si nuevo > limite Entonces
			Escribir "Limite excedido"
		FinSi
		
		Escribir "Cuenta (-1 para salir):"
		Leer cuenta
		
	FinMientras
	
FinProceso