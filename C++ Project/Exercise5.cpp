#include <iostream>
using namespace std;

int Exe5()
{
	double x;
	cout << "Need a value less than 1"<<endl;
	cin >> x;
	if (fabs(x) > 1) {
		cout << "that number is not valid"<<endl;
	}
	else {
		x = (180/3.1415927)*(acos(x));
		cout << x << endl;
	}
	return 0;
}