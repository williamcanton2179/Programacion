Proceso LimiteCredito
	
	Definir cuenta Como Entero
	Definir saldo Como Real
	Definir cargos Como Real
	Definir creditos Como Real
	Definir limite Como Real
	Definir nuevo Como Real
	
	Escribir "Numero de cuenta:"
	Leer cuenta
	
	Escribir "Saldo inicial:"
	Leer saldo
	
	Escribir "Cargos:"
	Leer cargos
	
	Escribir "Creditos:"
	Leer creditos
	
	Escribir "Limite de credito:"
	Leer limite
	
	nuevo <- saldo + cargos - creditos
	
	Escribir "Nuevo saldo: ", nuevo
	
	Si nuevo > limite Entonces
		Escribir "Limite excedido"
	FinSi
	
FinProceso