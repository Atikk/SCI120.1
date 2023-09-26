#include <iostream>
#include <cmath>
#include <string>
#include "myLib.hpp"
#include <vector>
#include <fstream>

using namespace std;

int Exe10() {

	int x = 1;
	cout << "Enter a file name:\n";
	string dataFile;
	getline(cin, dataFile);

	ofstream fileOut;

	fileOut.open(dataFile);

	while (x <= 10) {
		fileOut << x << " ";
		x = x + 1;
		cout << x;
	};
	fileOut.close();
	return 0;
};