#include <iostream>
#include<cstring>

using namespace std;

int main() {

	int list[] = { 100, 200, 300 }; 

	int limit = sizeof(list) / sizeof(list[0]);
	
	for (int i = 0; i < limit; i += 1) {
		cout << list[i] << endl;

		if (list[i] == 200) {
			break;
		}
	}

}