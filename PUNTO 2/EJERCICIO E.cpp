
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Ingrese cualquier numero" << endl;
	cin >> num;
	if (num % 2 == 0) {
		cout << "es par" << endl;
	} else {
		cout << "es impar" << endl;
	}
	return 0;
}

