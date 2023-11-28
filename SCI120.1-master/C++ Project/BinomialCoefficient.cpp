#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

unsigned int factorial(int n, unsigned int m = 1);
unsigned int fallingPower(int n, unsigned int k);
unsigned int binomial(int n, unsigned int k);
void plotBinomial(int n, float mc = 40, char ch = '*');


int main() {
    cout << "Enter number: ";
    unsigned int n = 10;
    cin >> n;
    plotBinomial(n);
    return 0;
}


unsigned int factorial(int n, unsigned int m) {
    if (n >= m) {
        return n * factorial(n - 1, m);
    }
    else {
        return 1;
    }
}

unsigned int fallingPower(int n, unsigned int k) {
    if (n >= k) {
        return factorial(n, n - k + 1);
    }
    else {
        return factorial(k);
    }
}

unsigned int binomial(int n, unsigned int k) {
    return fallingPower(n, k) / factorial(k);
}

void plotBinomial(int n, float mc, char ch) {

    unsigned int max = binomial(n, n / 2);
    int d = 1 + log10(max);
    float scale = mc / max;
    for (int k = 0; k <= n; ++k) {
        unsigned int b = binomial(n, k);
        string line(static_cast<size_t>(b * scale), ch);
        cout << setw(d) << b << " |" << line << endl;
    }
}
