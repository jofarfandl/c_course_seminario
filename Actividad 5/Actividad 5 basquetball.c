#include<stdio.h>

int main() {
	int edad;
	float est;
	int prom;
	printf("Ingresa tu promedio:\n");
	scanf("%i",&prom);
	printf("Ingrese su estatura en metros ejemplo(1.65): \n");
	scanf("%f",&est);
	printf("Ingresa tu edad: \n");
	scanf("%i",&edad);
	if (prom>=80 && est>=1.75 && (edad>=18 && edad<=24)) {
		printf("Felicidades, haz sido aceptado en el poderosisimo equipo de basquetball\n");
	}
	if (prom<80 || est<1.75 || (edad<18 || edad>24)) {
		printf("Lo sentimos usted a sido rechazado como en la poderosisima UdG :,( \n");
	}
	return 0;
}

