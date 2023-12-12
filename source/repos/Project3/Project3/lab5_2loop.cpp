#include<iostream>
#include<vector>
#include <string>

using namespace std;
int main() {
	int n = 9;
	vector<double> y = {0.1, -3, 0.5};
	double t = -7.4;
	vector<double> w;
	vector<double> s;
	double j = 0.1;
	int i = 1;
	for (int i =0; i<3; i++){
		for (double j = 0.1; j <= 0.4; j += 0.1) {
			double tempW = 0.6 * j + exp(t - j) * pow((4 * y[i] / n), 2);
			double tempS = sqrt(tempW - 0.1 * t) / (2 + pow(n, 2));
			cout << "w" + to_string(i+1) << " " << to_string(int(j * 10) + 1)<<" " << " " << tempW << "\n";
			cout << "s" + to_string(i+1) << " " + to_string(int(j * 10) + 1)<<" " << " " << tempS << "\n";
		}
	}
	return 0;
}