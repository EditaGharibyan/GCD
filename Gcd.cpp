#include <iostream>
#include <cmath>
using namespace std;

class GCD_LCM_Calculator {
private:
    int a, b, gcd, lcm;

    void calculateGCD() {
        int absA = abs(a);
        int absB = abs(b);
        int minVal = absA > absB ? absB : absA;

        for (int i = 1; i <= minVal; i++) {
            if (absA % i == 0 && absB % i == 0) {
                gcd = i;
            }
        }
    }

    void calculateLCM() {
        lcm =abs( (a * b) / gcd);
    }

public:
    GCD_LCM_Calculator(int num1, int num2) : a(num1), b(num2), gcd(1), lcm(1) {}

    void calculate() {
        calculateGCD();
        calculateLCM();
    }

    void displayResults() const {
        cout << "GCD = " << gcd << endl;
        cout << "LCM = " << lcm << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two different numbers: ";
    cin >> num1 >> num2;

    GCD_LCM_Calculator calculator(num1, num2);
    calculator.calculate();
    calculator.displayResults();

    return 0;
}
