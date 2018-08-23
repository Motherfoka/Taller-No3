/*
* fecha: 22 de agosto de 2018
* elaborado por: edwar gaviria
*/
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	//int a, n, d, c
	int X, Y, Z, C;
	bool primo;
	printf("ingrese la cantidad de numeros que desea ver\n");
	scanf("%d", &Z);
	printf("1: 2\n");
	Y = 1;
	C = 3;
	while (Y < Z) {
		
		primo = true;
		for (X = 3; X <= sqrt(C); X += 2) {
			if (C % X == 0) {
				primo = false;
				
			}
		}
		
		if (primo) {
			Y = Y + 1;
			printf("%d: %d\n", Y, C);
		}
		
		C = C + 2;
	}
	return 0;
}

	
