#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

const double pi = 3.14159265358;

int sawtooth() {
    int nmax;

    cout << "Enter the maximum number of terms in the sum: ";

    cin >> nmax;

    string lab = to_string(nmax);

    string csvFileName = "sawtooth_" + lab + ".csv";

    ofstream outFile;

    outFile.open(csvFileName);

    double xmin = 0;
    double xmax = 4 * pi;
    int steps = 100;
    double dx = (xmax - xmin) / steps;

    for (double x = xmin; x <= xmax; x += dx) {
        double sum = 0;
        for (int n = 1; n <= nmax; ++n) {
            sum += pow(-1, n + 1) / n * sin(n * x);
        }
        sum *= 2 / pi;
        outFile << x << "," << sum << endl;
    }
    outFile.close();

    cout << "File " << csvFileName << " successfully written." << endl;

    return 0;
}
