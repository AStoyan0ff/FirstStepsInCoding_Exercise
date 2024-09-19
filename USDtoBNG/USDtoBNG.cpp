#include <iostream>
using namespace std;

int main() {
	double usd;
	cin >> usd;

	cout.setf(ios::fixed);
	cout.precision(2);

	double bgn = usd * 1.79549;

	cout << bgn << endl;
}