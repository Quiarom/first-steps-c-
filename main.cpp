#include <iostream>

using namespace std;

int main() {

	int age = 0;

	cout << "age: ";

	cin >> age;

	if (age < 18 || age > 40) {
		cout << "No Puedes votar";
	} else {
		cout << "Puedes votar";
	}
	
	
}