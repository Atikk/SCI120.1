#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

double cylinderVolume(double h, double r) {
	double x = 3.14 * r * r;
	return r, h, x;
}
double getDouble(string label) {
	cout << label << " ";
	double v;
	cin >> v; // in from console
	return v;
}
int Exe9() {
	cout << "Enter cylinder:";
	double heigh;
	double radius;
	heigh = getDouble("height = ");
	radius = getDouble("radius = ");
	cout << "Cylinder volume = ";
	cout << cylinderVolume(heigh, radius);
	return 0;
};