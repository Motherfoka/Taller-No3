/*
* fecha: 22 de agosto de 2018
* elaborado por: edwar gaviria
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int d, n = 1;
	
	printf("cuadrado de los 10 primeros numeros naturales\n");
	
	for (d = 1; d <= 10; d++)
	{
		printf("%d\n", n * n);
		n = n + 1;
	}
	
	return 0;
}

