
#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	cout << "ingrese 3 numeros" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b && a > c) {
		cout << "el mayor es " << a << endl;
	} else {
		if (b > a && b > c) {
			cout << "el mayor es " << b << endl;
		} else {
			if (c > a && c > b) {
				cout << "el mayor es " << c << endl;
			} else {
				cout << "error" << endl;
			}
		}
	}
	return 0;
}

