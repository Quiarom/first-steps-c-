#include <iostream>

using namespace std;

int main() {

	int option = 0;

	cout << "Ingrese el número 1 o 2: ";
	cin >> option;
	
	switch(option) {
		case 1:
				cout << "You are the number 1";
				break;
		case 2:
				cout << "You are the number 2";
				break;
		default:
				cout << "You are nothing"; 
				break;

	}
}