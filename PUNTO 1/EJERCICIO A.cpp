
/*
programa = este programa calcula el area de un triangulo
fecha : 16/08/2018
usuario: sebastian ariza
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int base, altura, area;
	
	printf ("ingrese la base\n");
	scanf ("%d", &base);
	printf ("ingrese la altura\n");
	scanf ("%d", &altura);
	
	area = (base * altura) / 2;
	printf ("el area del triangulo es: %d\n", area);
	
	return 0;
}

