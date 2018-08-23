// Este codigo ha sido generado por el modulo psexport 20150822-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float X;
	float Y;
	float Z;
	cout << "ingrese 3 numeros" << endl;
	cin >> X;
	cin >> Y;
	cin >> Z;
	if (X < Y && X < Z) {
		cout << "el menor es " << X << endl;
	} else {
		if (Y < X && Y < Z) {
			cout << "el menor es " << Y << endl;
		} else {
			if (Z < X && Z < Y) {
				cout << "el menor es " << Z << endl;
			} else {
				cout << "daño grave al sistema" << endl;
			}
		}
	}
	return 0;
}

