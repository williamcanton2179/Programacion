Proceso Terreno
    Definir ancho, largo, precioMetro, area, precioTerreno, perimetro, alambre Como Real
	
    Escribir "Ingrese el ancho del terreno (m):"
    Leer ancho
	
    Escribir "Ingrese el largo del terreno (m):"
    Leer largo
	
    Escribir "Ingrese el precio por metro cuadrado:"
    Leer precioMetro
	
    area <- ancho * largo
    precioTerreno <- area * precioMetro
    perimetro <- 2 * (ancho + largo)
    alambre <- perimetro * 3
	
    Escribir "Precio del terreno: Q", precioTerreno
    Escribir "Metros de alambre necesarios: ", alambre
FinProceso