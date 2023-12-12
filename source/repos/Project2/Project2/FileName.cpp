#include<iostream>
#include<vector>
#include <string>

using namespace std;
int main() {
	int y = 5, n = 9;
	double t = -7.4;
	vector<double> w;
	vector<double> s;
	double j = 0;
	int i = 1;
	while (j <= 2) {
		double tempW = 0.6 * j + exp(t - j) * pow((4 * y / n), 2);
		double tempS = sqrt(tempW - 0.1 * t) / (2 + pow(n, 2));
		cout << "w" + to_string(i) << " " << tempW << "\n";
		cout << "s" + to_string(i) << " " << tempS << "\n";
		i++;
		j += 0.1;
	}
	return 0;
}