#include <iostream>

using namespace std;
using std::cout;
using std::endl;

int main() {

	int age = 0;
	age = 18;

	const char letter = 'a';

	int ages_people[] = { 18, 24, 16 };
	ages_people[1] = 26;

	cout << age << endl;
	cout << letter << endl;
	cout << ages_people[1] << endl;

}