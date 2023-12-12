#include <iomanip>
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Ведите символ"; cin >> c;


	cout << endl;

	cout << setw(2) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
}