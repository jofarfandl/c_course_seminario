Algoritmo basquetball
	Escribir "Ingresa tu promedio:"
	leer prom
	escribir "Ingrese su estatura en metros ejemplo(1.65): "
	leer est
	escribir "Ingresa tu edad: "
	leer edad
	Si prom >= 80 && est >= 1.75 && (edad >=18 && edad <= 24)  Entonces
		escribir "Felicidades, haz sido aceptado en el poderosisimo equipo de basquetball"
	Fin Si
	si prom < 80 || est < 1.75 || (edad < 18 || edad > 24) Entonces
		escribir "Lo sentimos usted a sido rechazado como en la poderosisima UdG :,( "
	FinSi
FinAlgoritmo
