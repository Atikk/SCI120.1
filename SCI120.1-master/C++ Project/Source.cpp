#include <iostream>
#include <cmath>
using namespace std;

class Vector2D {
	double x, y; 
public: 
	double get_x() { return x; };
	double get_y() { return y; };
	void set_x(double xx) { x = xx; };
	void set_y(double yy) { y = yy; };
	void setFromPolar(double rad, double ang, bool deg = true);
};


const double D2R = 3.14159 / 180.;
void Vector2D::setFromPolar(double rad, double ang, bool deg) {if() };
