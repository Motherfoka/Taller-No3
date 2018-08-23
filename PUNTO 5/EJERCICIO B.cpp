/*
* fecha: 22 de agosto de 2018
* elaborado por: edwar gaviria
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	//programa: suma de numeros enteros
	int c;
	int resultado = 0;
	do
		
		{
			
			printf ("ingrese un numero\n");
			scanf ("%d", &c);
			resultado += c;
			
		}while (c != 0); 
	printf ("la suma total es de : %d\n", resultado);
	    
	return 0;
}

