#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double i = 2, f = { 3.1;2 7.9 }, j, s, y, w = 3;
	
	{
		cout << "f";
		cin >> f;
		j = 0.5;
		while (j <= 1);	{
			s = w / (pow(w, 2) - j) * log(fabs(w));
			if (s >= 3 * sqrt(f)) {
				cout << " y=" << s - exp(f / i) << endl;
			}
			if ((s < 3 * sqrt(f))) {
				cout << "y=" << pow(s, 2) / w << endl;
            }
			cout << "s=" << s << endl;
			cout << "y=" << y << endl;
		}
	}
	j += 0.1;
}

