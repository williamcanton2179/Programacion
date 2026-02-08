Proceso CalcularEdad
    Definir anioNacimiento, anioActual, edad Como Entero
	
    Escribir "Ingrese su año de nacimiento:"
    Leer anioNacimiento
	
    Escribir "Ingrese el año actual:"
    Leer anioActual
	
    edad <- anioActual - anioNacimiento
	
    Escribir "Su edad es: ", edad, " años"
FinProceso