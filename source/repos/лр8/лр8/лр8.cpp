#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double c = 0.7, d, k;
	int n1 = 6, n2 = 5;
	double a[6];
	double b[5];
	double sum1 = 0,sum2=0;
	for (int i = 1; i <= n1; i++) {
		cout << "введите a" << "\n";
		
		cin >> k;
		a[i - 1] = k;
		sum1 += a[i - 1];
	}
	for (int i = 1; i <= n2; i++) {
		cout << "введите b" << "\n";

		cin >> k;
		b[i - 1] = k;
		sum2 += pow(b[i - 1] - 1, 2);
	}
	d = sum1 - c * sum2;
	cout << d << endl;
}
