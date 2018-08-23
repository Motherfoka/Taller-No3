/*
programa = este programa convierte una determinada cantidad de pesos colombianos que tiene una persona en dolares.
fecha : 16/08/2018
usuario: sebastian ariza
*/

#include <stdio.h>
using namespace std;


int main(int argc, char *argv[]) {
	
	float dolar, pesoColombiano, cantD;
	dolar = 0;
	pesoColombiano = 0;
	cantD = 0;
	printf ("ingrese la cantidad de dolares que posee\n");
	scanf ("%f", &cantD);
	printf ("ingrese el valor del dolar\n");
	scanf ("%f", &dolar);
	
	pesoColombiano = dolar * cantD;
	
	printf ("la cantidad de pesos colombianos que tiene son de: %f\n", pesoColombiano);
	
	
	
	return 0;
}
