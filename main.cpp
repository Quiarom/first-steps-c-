#include <iostream>
#include<cstring>

using namespace std;


int sum(int a, int b) {
	return a + b;
}

int mult(int a, int b) {
	return a * b;
}

int main () {
	cout << sum(2, 3) << endl;
	cout << mult(4, 4) << endl;
}