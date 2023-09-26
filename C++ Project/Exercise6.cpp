#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int Exe6()
{
	double x;
	cin >> x;
	int n = 1;
	while (n <= 50) {
		x = x + pow(-1, (n + 1)) * pow(x, n) / n;
		cout << x;
		n = n + 1;
	}
	cout << x;
	return 0;
}