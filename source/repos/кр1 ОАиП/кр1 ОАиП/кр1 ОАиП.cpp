#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double i = 2, s, y, f = 1.2, j = -7 * pow(10, -3), w = 2;
    while (w <= 5)
    {
        s = w / (pow(w, 2) - j) * log(fabs(w));
        if (s >= 3 * sqrt(f)) {
            cout << " y=" << s - exp(f / i) << endl;
        }
        if ((s < 3 * sqrt(f))) {
            cout << "y=" << pow(s, 2) / w << endl;

        }
        w += 0.5;
    }

}