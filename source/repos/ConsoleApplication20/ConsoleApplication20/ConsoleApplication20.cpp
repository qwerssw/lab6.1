#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double t, y, z, a = 2e-3, b = 8.5, n = 2;
    for (int i = 0;i < 3; i++)
    {
        cout << "Введите t=";
        cin >> t;
        y = sqrt(t * b - pow(b, 2) * a);
        z = y * tan(n / 4) - exp(1 + b);
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
    return 0;
}
