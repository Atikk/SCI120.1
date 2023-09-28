#include <iostream>

using namespace std;

int Exe11() {
	double x;
	cout << " Enter a number: ";
	cin >> x;
	double* p = nullptr;

	if (x > 0) { x = sqrt(x); p = &x; }
	if (p != nullptr) {
		cout << "squareroot is " << *p << endl;
	}
	else { cout << "value is invalid"; }
	return 0;
}