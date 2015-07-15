#include <iostream>

using namespace std;

namespace differentNamespace {
	int sth() {
		cout << "some differentNamespace" << endl;
		return 1;
	}
}

namespace evenMoreDifferentNamespace {
	int sth() {
		cout << "some evenMoreDifferentNamespace" << endl;
		return 1;
	}
}

using evenMoreDifferentNamespace::sth;

int main() {
	differentNamespace::sth();
	sth();
	return 0;
}
