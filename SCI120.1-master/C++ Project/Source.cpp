#include <iostream>
#include <string>

class Rational {
private:
    int num;
    int den;

public:
    // Constructor
    Rational(int n = 0, int d = 1) : num(n), den(d) {
        normalize();
    }

    // Method to set values1
    void set(int n, int d = 1) {
        num = n;
        den = d;
        normalize();
    }

    // Accessor functions
    int getNum() const {
        return num;
    }

    int getDen() const {
        return den;
    }

    // Method to negate the rational number
    Rational neg() const {
        return Rational(-num, den);
    }

    // Method to add two rational numbers
    Rational plus(const Rational& rhs) const {
        return Rational(num * rhs.den + den * rhs.num, den * rhs.den).reduce();
    }

    // Method to subtract two rational numbers
    Rational minus(const Rational& rhs) const {
        return plus(rhs.neg());
    }

    // Method to calculate reciprocal
    Rational reciprocal() const {
        return Rational(den, num).reduce();
    }

    // Method to multiply two rational numbers
    Rational times(const Rational& rhs) const {
        return Rational(num * rhs.num, den * rhs.den).reduce();
    }

    // Method to divide by another rational number
    Rational divideBy(const Rational& rhs) const {
        return times(rhs.reciprocal());
    }

    // Method to check equality
    bool equal(const Rational& rhs) const {
        return (num == rhs.num) && (den == rhs.den);
    }

    // Method to check if less than
    bool lessThan(const Rational& rhs) const {
        return (num * rhs.den < rhs.num * den);
    }

    // Method to convert to decimal
    double decimal() const {
        return static_cast<double>(num) / den;
    }

    // Method to convert to string
    std::string str(bool both = false) const {
        std::string ans = "(" + std::to_string(num);
        if (both && den != 1) {
            ans += "/" + std::to_string(den);
        }
        ans += ")";
        return ans;
    }

private:
    // Private method to normalize the rational number
    Rational normalize() {
        if (den < 0) {
            num = -num;
            den = -den;
        }
        return *this;
    }

    // Private method to reduce the rational number
    Rational reduce() const {
        int g = gcd(num, den);
        if (g != 0 && g != 1) {
            return Rational(num / g, den / g);
        }
        return *this;
    }

    // Private method to calculate greatest common divisor
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

// Function to calculate difference error
Rational diffErr(const Rational& x, const Rational& y) {
    Rational z = (x.minus(y)).divideBy((x.plus(y)).divideBy(2)).times(100);
    return (z.lessThan(0)) ? z.neg() : z;
}

int main() {
    Rational x(3, 2);
    Rational y(5, 3);

    std::cout << "x = " << x.str() << std::endl;
    std::cout << "y = " << y.str() << std::endl;

    Rational z = diffErr(x, y);

    std::cout << "|x-y|/[(x+y)/2]*100% = " << z.str() << " = " << z.decimal() << std::endl;

    return 0;
}
