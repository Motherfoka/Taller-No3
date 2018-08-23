#include<iostream>
using namespace std;

int main() {
	float m;
	cout << "ingrese un numero" << endl;
	cin >> m;
	if (m==1) {
		cout << "lunes" << endl;
	} else {
		if (m==2) {
			cout << "martes" << endl;
		} else {
			if (m==3) {
				cout << "miercoles" << endl;
			} else {
				if (m==4) {
					cout << "jueves" << endl;
				} else {
					if (m==5) {
						cout << "viernes" << endl;
					} else {
						if (m==6) {
							cout << "sabado" << endl;
						} else {
							if (m==7) {
								cout << "domingo" << endl;
							} else {
								cout << "error" << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
