#include <iostream>
using namespace std;
int main()
{
    double t[3] = { 9, 4, 2 };
    double x[5] = { 0.6, 23, 5, 0.8, 4 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            double z;

            if (t[i] > x[j]) {
                z = pow(sin(t[i]), 2);
            }
            else if (t[i] < x[j]) {
                z = 4 * (t[i] + x[j]);
            }
            else {
                z = 1 - exp(x[j] - 2);
            }

            cout << "t = " << t[i] << ", x = " << x[j] << ", z = " << z << endl;
        }
    }
    return 0;
}