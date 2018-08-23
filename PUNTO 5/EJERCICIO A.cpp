/*
* fecha: 22 de agosto de 2018
* elaborado por: edwar gaviria
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//programa: tabla de multiplicar
	char c;
	int i, num;
	
	//ejercicio hecho en clase con ayuda del profesor edinson mosquera
	
	do
		{
		
		printf("introduzca un numero entero: ");
		scanf("%d", &num);
		printf("\n la tabla de multiplicar del numero %d es: \n\n", num);
		
		
		for (i = 0; i <= 10; i++)
		{
			
			printf("%d * %d = %d \n", i , num, i * num);
			
		}
		
		printf("\n desea visualizar otra tabla de multiplicar (s/n) ?: ");
		fflush (stdin);
		scanf("%c", &c);
		printf("\n");
		
	} while(c != 'n');
	
return 0;
}	
