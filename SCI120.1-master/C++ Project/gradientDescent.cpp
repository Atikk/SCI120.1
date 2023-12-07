#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct xyPair {
    double x;
    double y;
};

double eval(const  vector<double>& coefficients, double x) {
    double result = 0.0;
    for (int i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

 vector<double> yDiff(const  vector<double>& coefficients, const  vector<xyPair>& data, double& error) {
     vector<double> diff(data.size());

    error = 0.0;
    for (int i = 0; i < data.size(); ++i) {
        diff[i] = data[i].y - eval(coefficients, data[i].x);
        error += diff[i] * diff[i];
    }

    return diff;
}

  vector<double> gradientDescentStep( vector<double>& coefficients, const  vector<xyPair>& data, double& error) {
      vector<double> gradient(coefficients.size(), 0.0);
     double stepSize = 0.002;

     for (int n = 0; n < coefficients.size(); ++n) {
         for (int i = 0; i < data.size(); ++i) {
             gradient[n] += data[i].x * pow(data[i].x, n) * (data[i].y - eval(coefficients, data[i].x));
         }
         coefficients[n] -= stepSize * gradient[n];
     }

     return yDiff(coefficients, data, error);
 }

 vector<double> gradientDescent(const  vector<xyPair>& data, int degree) {
     vector<double> coefficients(degree + 1, 0.0);
    double prevError = 1.0e32;
    double currentError;
    int stag = 0;
    int stall = 5;

    for (int iter = 0; iter < 10000; ++iter) {
         vector<double> diff = gradientDescentStep(coefficients, data, currentError);

        if (currentError < prevError) {
            stag = 0;
        }
        else {
            stag++;
            if (stag == stall) {
                break;
            }
        }

        prevError = currentError;
    }

    return coefficients;
}

int grad() {
    string inputfile;
    cout << "what is the name of your file?";
    cin >> inputfile;
     ifstream inputFile(inputfile);
    if (!inputFile.is_open()) {
         cerr << "Error: Unable to open input file." <<  endl;
        return 1;
    }

     vector<xyPair> data;
    double x, y;
    while (inputFile >> x >> y) {
        data.push_back({ x, y });
    }

     vector<double> coefficients = gradientDescent(data, 3);

    for (int i = 0; i < coefficients.size(); ++i) {
         cout << coefficients[i] << " ";
    }

    return 0;
}
