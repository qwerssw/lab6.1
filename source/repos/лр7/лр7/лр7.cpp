#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    float a = 1.33 * pow(10, -3), k = 6, d,b, x;
    for (int n = 0; n < 4; n++)
    {
        cout << "Введите x=";
        cin >> x;
        d = exp(-x) + (x - a) / log(x);
        if (d >= k * sqrt(a)) {
            cout << "b = " << 6 * d * x << endl;
        }
        if (d < k * sqrt(a)) {
            cout << "b = " << sin(a / x) << endl;
        }
    }

    return 0;
}

