

#include<iostream>
using namespace std;


int main() {
	string g;
	cout << "escriba una letra" << endl;
	cin >> g;
	if (g == "a" || g == "e" || g == "i" || g == "o" || g == "u") {
		cout << "es vocal" << endl;
		cout << "esta en minuscula" << endl;
	} else {
		if (g == "A" || g == "E" || g == "I" || g == "O" || g == "U") {
			cout << "es vocal" << endl;
			cout << "esta en mayuscula" << endl;
		} else {
			cout << "no es una vocal" << endl;
		}
	}
	return 0;
}

