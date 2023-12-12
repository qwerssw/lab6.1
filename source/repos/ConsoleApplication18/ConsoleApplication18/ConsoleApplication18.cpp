#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int SIZE = 3;
    double t[SIZE] = { 9, 4, 2 };
    double x[SIZE] = { 0.6, 23, 5 };

    for (int i = 0; i < SIZE; i++) {
        double z;

        if (t[i] > x[i]) {
            z = pow(sin(t[i]), 2);
        }
        else {
            z = 4 * (t[i] + x[i]);
        }

        cout << "t = " << t[i] << ", x = " << x[i] << ", z = " << z << endl;
    }

    return 0;
}
