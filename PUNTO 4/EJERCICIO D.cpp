/*
* fecha: 22 de agosto de 2018
* elaborado por: edwar gaviria
*/
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	
	
	//variables
	float num;
	
	printf("introduzca un numero real ");
	
	scanf("%f", &num);
	
	
	while (num != 0 && num != 1)
	{
		
		printf("la mitad de %.2f\n es: %.2f ", num, num / 2);
		printf("introduzca otro numero real: ");
		scanf("%f", &num);
		
	}
	
}

