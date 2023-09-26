#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int Exe4()
{
	double x1 = 1.5;
	double y1 = 3.4;
	double x2 = 6.5;
	double y2 = 25;
	double slope;
	double intercept;
	slope = (y2 - y1) / (x2 - x1);
	intercept = (y1 * x2 - x1 * y2) / (x2 - x1);
	cout << slope << intercept<<endl;
	return 0;
}