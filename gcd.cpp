#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, gcd;//greatest common divisior
    cout << "Enter two different numbers";
    cin >> a >> b;
    int a1 = a, b1 = b;
    a = abs(a);
    b = abs(b);
    int min = a;
    if (a > b) {
        min = b;
    }
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << endl << "GCD= " << gcd;
    int lcm = 1;//least common multiply
    lcm = (a1 * b1) / gcd;
    cout << endl << "Lcm = " << lcm;

}
