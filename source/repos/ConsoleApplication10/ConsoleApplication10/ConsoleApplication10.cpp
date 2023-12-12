#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_COLLATE, "Russian");
	float a = 10, b = 20, c = 20;
	double p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь =" << s << endl;
	system("pause");
	return 0;
}