#include <iostream>

using namespace std;

int main() {
	int a{ 10 };
	int b{ 2 };
	int c{ 3 };

	double d = (a - b) / c; 
	cout << "Equation double d = (a - b) / c; evaluates as integer, even though d is a double variable" << endl;
	cout << "double d = (a - b) / c = " << d << endl << endl;
	
	d = static_cast<double>(a - b) / c;
	cout << "after explicit static cast of first equation part, equation evaluates as double" << endl;
	cout << "double d = static_cast<double>(a - b) / c = " << d << endl << endl;
	
	d = (double)(a - b) / c;
	cout << "C-like casting also works" << endl;
	cout << "double d = (double)(a - b) / c; = " << d << endl << endl;

	d = static_cast<double>((a - b) / c);
	cout << "!!Remember that casting of whole equation won't give a good result!" << endl;
	cout << "d = static_cast<double>((a - b) / c = " << d << endl << endl;
	cout << "!!It is because compiler evaluates (a - b) as an integer... :("  << endl;

	return 0;
}
