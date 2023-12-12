#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double t = 1.5;
    double x = 1.9;
    double z;
    while (t <=2)
    {

        if (t > x) {
            cout << "z=" << sin(t) * sin(t) << endl;
        }
        if (t < x) {
            cout << "z=" << 4 * (t + x) << endl;
        }
        if (t == x) {
            cout << "z=" << 1 - exp(x - 2) << endl;

        }
        t += 0.1;
    }
    return 0;
}