Proceso AporteSindical
    Definir edad Como Entero
    Definir sueldo, porcentaje, aporte Como Real
	
    Escribir "Ingrese la edad:"
    Leer edad
	
    Escribir "Ingrese el sueldo anual:"
    Leer sueldo
	
    Si sueldo < 10000 Entonces
        porcentaje <- 0.005
    Sino
        Si sueldo <= 19999 Entonces
            porcentaje <- 0.01
        Sino
            Si sueldo <= 29999 Entonces
                porcentaje <- 0.02
            Sino
                porcentaje <- 0.025
            FinSi
        FinSi
    FinSi
	
    aporte <- sueldo * porcentaje
	
    Si edad <= 30 Entonces
        aporte <- aporte + (aporte * 0.20)
    FinSi
	
    Escribir "El aporte sindical es: $", aporte
FinProceso
