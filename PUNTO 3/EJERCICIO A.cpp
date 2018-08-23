
/*
* programa: area de 5 circunferencias de radios
* fecha: 22 de agosto de 2018
* elaborado por: edwar gaviria
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	
	
	float area, radio;
	int i;
	
	
	for (i = 1; i <= 5; i++)
	{
		
		printf("introduzca el radio %d:  \n", i);
		scanf ("%f", &radio);
		
		
		area = 3.1416 * radio * radio;
		
		printf("\n el area de la circunferencia %d es: %.2f \n", i , area);
		
	}
	
	return 0;
}

