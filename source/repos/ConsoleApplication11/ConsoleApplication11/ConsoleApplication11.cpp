#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");	
	int num;
	cin >> num;
	int x1 = num % 10;
	num /= 10;
	int x2 = num % 10;
	num /= 10;
	int x3 = num % 10;
	num /= 10;
	int x4 = num % 10;
	num /= 10;
	if (x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x2 != x4 && x3 != x4);
	else
	{
		cout << "Верно";
	}
	if (x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x2 != x4 && x3 != x4);
else {
		cout << "Не верно";
	}
	return 0;
}
