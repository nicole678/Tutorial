#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	const double PI = 3.1415925;
	double r;

	cout << "\tDregree\t\tSin\t\tCos" << endl;

	for (int i = 0; i <= 360; i += 10) {
		r = i * PI / 180;

		cout << "\t";
		cout << noshowpos;
		cout << setw(3);
		cout << i << "\t\t";

		cout << showpos;
		cout << fixed << setprecision(4);

		cout << sin(r) << "\t\t";
		cout << cos(r) << "\t\t";
		cout << endl;
	}

	return 0;
}