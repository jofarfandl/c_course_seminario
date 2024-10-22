Algoritmo sueldo_neto
	Definir cat Como Caracter
	Definir bono,bono1,bono2,sb,imp,ayuda,desc_info,sn Como Real
	Definir hrs,anios,info Como Entero
	// preguntamos al usuario toda la informacion que deseamos saber sobre el 
	Escribir 'cuantas horas trabajo?'
	Leer hrs
	Escribir 'Ingrese su categoria ->a<- o ->b<-: '
	Leer cat
	Escribir 'Ingrese la cantidad de años que tiene en la empresa'
	Leer anios
	Escribir 'Cuenta con credito infonavir? Si=1, No=2'
	Leer info
	// basado en su categoria definimos su sueldo bruto 
	Si cat=='a' O cat=='A' Entonces // si es categoria a su sueldo por hora es 60
		sb <- 60*hrs
	FinSi
	Si cat=='b' O cat=='B' Entonces // si es categoria b su sueldo por hora es 80
		sb <- 80*hrs
	FinSi
	// si su antiguedad es mayor a 5 años le daremos un bono
	bono <- 0
	Si anios>=5 Entonces // verificamos que sea mayor o igual a 5 años
		Si anios<=30 Entonces // verificamos que su antiguedad sea menor a 30 años lo cual corresponde al 60 MOD  que es lo maximo de bono
			bono1 <- sb*0.10 // le damos el 10 MOD  de bono por los primeros 5 años
			bono2 <- (anios-5)*(sb*0.02) // le damos 2 MOD  de bono por cada año
			bono <- bono1+bono2 // sumamos el bono total
		FinSi
		Si anios>30 Entonces // si su antiguedad sobrepasa el maximo de bono, se le da solo el 60 MOD 
			bono <- sb*0.6
		FinSi
	FinSi
	imp <- sb*0.03 // impuesto
	ayuda <- sb*0.05 // despensa ayuda por concepto de vivienda
	des_info <- 0
	Si info==1 Entonces // verificamos que tenga casa del infonavit
		des_info <- sb*0.05
	FinSi
	sn <- sb+bono-imp+ayuda-des_info
	Escribir 'Sueldo bruto:',sb
	Escribir 'Bono: ',bono
	Escribir 'Impuestos: ',imp
	Escribir 'Despensa: ',ayuda
	Escribir 'Descuento por infonavit: ',des_info
	Escribir 'Sueldo neto: ',sn
FinAlgoritmo
