Proceso MomentoDelDia
    Definir hora Como Entero
	
    Escribir "Ingrese la hora (0 a 23):"
    Leer hora
	
    Si hora < 0 O hora > 23 Entonces
        Escribir "Error: hora inválida"
    Sino
        Si hora <= 5 Entonces
            Escribir "Madrugada"
        Sino
            Si hora <= 11 Entonces
                Escribir "Mañana"
            Sino
                Si hora <= 13 Entonces
                    Escribir "Mediodía"
                Sino
                    Si hora <= 19 Entonces
                        Escribir "Tarde"
                    Sino
                        Escribir "Noche"
                    FinSi
                FinSi
            FinSi
        FinSi
    FinSi
FinProceso
