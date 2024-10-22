#include<stdio.h>
#include<string.h>
#define MAX_STRLEN 256

int main() {
	int hrs, anios, info;
	float bono, bono1, bono2, sb, imp, ayuda, des_info, sn;
	//char cat[MAX_STRLEN];
	char cat;

	// preguntamos al usuario toda la informacion que deseamos saber sobre el
	printf("cuantas horas trabajo?\n");
	scanf("%i",&hrs);
	printf("Ingrese su categoria ->a<- o ->b<-: \n");
	scanf("%s",&cat);
	printf("Ingrese la cantidad de años que tiene en la empresa\n");
	scanf("%i",&anios);
	printf("Cuenta con credito infonavir? Si=1, No=2\n");
	scanf("%i",&info);
	//basado en su categoria definimos su sueldo bruto
	if (cat == 'a' || cat == 'A') {// si es categoria a su sueldo por hora es 60
		sb = 60*hrs;
	}
	if (cat == 'b' || cat == 'B') {	//si es categoria b su sueldo por hora es 80
		sb = 80*hrs;
	}
	//si su antiguedad es mayor a 5 años le daremos un bono
	bono = 0;
	if (anios >= 5) {//verificamos que sea mayor o igual a 5 años
		if (anios<=30) {//verificamos que su antiguedad sea menor a 30 años lo cual corresponde al 60% que es lo maximo de bono
			bono1 = sb*0.10;//le damos el 10% de bono por los primeros 5 años
			bono2 = (anios-5)*(sb*0.02);//le damos 2% de bono por cada año
			bono = bono1+bono2;//sumamos el bono total
		}
		if (anios>30) {//si su antiguedad sobrepasa el maximo de bono, se le da solo el 60%
			bono = sb*0.6;
		}
	}
	imp = sb*0.03;//impuesto
	ayuda = sb*0.05;//despensa ayuda por concepto de vivienda
	des_info = 0;
	if (info==1) {//verificamos que tenga casa del infonavit
		des_info = sb*0.05;
	}
	sn = sb+bono-imp+ayuda-des_info;
	printf("Sueldo neto:%f\n",sb);
	printf("Bono: %f\n",bono);
	printf("Impuestos: %f\n",imp);
	printf("Despensa: %f\n",ayuda);
	printf("Descuento por infonavit: %f\n",des_info);
	printf("Sueldo neto: %f\n",sn);
	return 0;
}

