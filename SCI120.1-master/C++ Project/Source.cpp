//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//using namespace std;
//
//struct xyPair { double x; double y; };
//
//double eval(const vector<double>& coefficients, double x);
//vector<double> yDiff(const vector<double>& coefficients, const vector<xyPair>& data, double& error);
//vector<double> gradientDescentStep(const vector<double>& coefficient, const vector<xyPair>& data, double& error);
//vector<double> gradientDescent(const vector<xyPair>&& data, int degree);
//
//int main() {
//	string inputFile;
//	cout << "what is the name of your file?";
//	cin >> inputFile;
//
//	ifstream inputFile(inputFile);
//	if (!inputFile.is_open()) { cerr << "Error:Could not open the input file.\n"; return 1;}
//
//	vector<xyPair> data;
//	double x, y;
//
//}