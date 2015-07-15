#include <iostream>

using namespace std;

int main() {
	double a = 2;
	int b = 5;
	double result;

	result = ((a + b) * (3 - 1)) / 5;

	cout << "This is a result of double arithmetic operations " <<  result << endl;

	int d = -b;

	cout << "b was: " << b << " d is a negation of b: " << d << endl;

	bool isFree = true;
	bool isHungry = false;
	bool isHappy = true;
	if (isFree && !isHungry || isHappy) {
		cout << "I am free, NOT hungry and happy OR unhappy!" << endl;
	}
	return 0;
}
