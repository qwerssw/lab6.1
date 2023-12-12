#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double y;
	double x[5], z[5];
	double k,sum1 = 0;
	for (int i = 1; i <= 5;i++) {
		cout << "Введите x" << endl;
		cin >> k;
		x[i - 1] = k;
		z[i-1] = 2 + x[i - 1];
		sum1 += pow(x[i - 1], 2);
	}
	y = sum1 + min(z[0], z[4]);
	cout << y;
	return 0;
}
