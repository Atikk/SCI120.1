#include <iostream>
#include <cmath>
using namespace std;

void solveQuadraticEquation(double a, double b, double c) {

	cout << "Solutions:";
	if (a != 0) {}

	double x = (-b / (2 * a));
	double y = x * x - c / a;
	if (y > 0) {
		y = sqrt(y);
		cout << x + y;
		cout << x - y;
	}
	else if (y < 0) {
		y = sqrt(-y);
		cout << x << "+" << y << "i";
		cout << x << "-" << y << "i";
	}
	else {
		cout << x;
		if (b != 0) {
			cout << (-c / b);
		}
		else { cout << "None"; }

	}
}

int main(){
	double a;
	double b;
	double c;
	cout << "Enter the coefficients of\n a z^2 + b z + c = 0\n";
	cin >> a >> b >> c;
	cout << "a b c = " << a << " " << b << " " << c << " ";
	solveQuadraticEquation(a,b,c);

}