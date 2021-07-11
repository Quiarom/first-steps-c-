#include <iostream>
#include<cstring>

using namespace std;

int main() {

	char result = ' ';

	do {

		cout << "¿end?" << endl;

		cin >> result;

		if (result == 'y') {
			cout << "Bye Baby";
		} else if (result == 'n') {
			cout << "UnU" << endl;
		}

	} while(true);
	
}