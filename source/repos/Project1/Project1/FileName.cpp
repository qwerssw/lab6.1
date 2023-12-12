#include<iostream>
#include<vector>
#include <string>

using namespace std;
int main() {
	int y = 5, n = 9;
	double t = -7.4;
	vector<double> w;
	vector<double> s;
	vector<double> j = { 0.5, 8.4, 0.3 };
	for (int i = 0; i < 3; i++) {
		double tempW = 0.6 * j[i] + exp(t - j[i]) * pow((4 * y / n), 2);
		double tempS = sqrt(tempW - 0.1 * t) / (2 + pow(n, 2));
		cout << "w" + to_string(i + 1)<<" " << tempW << "\n";
		cout << "s" + to_string(i + 1)<<" " << tempS << "\n";
	}
	return 0;
}