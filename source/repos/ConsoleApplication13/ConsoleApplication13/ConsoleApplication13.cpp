#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, ".1251");
	int num;
	cin >> num;
	int a = num % 10;
	num /= 10;
	int b = num % 10;
	num /= 10;
	int c = num % 10;
	num /= 10;
	int d = num % 10;
	if (a != b && a != c && a != d && b != c && b != d && c != d) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}
	return 0;
}