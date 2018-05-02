#include<iostream>
using namespace std;
int main() {

	double base, exponent;
	double ans;

	cout << "Enter the base value: ";
	cin >> base;
	cout << "Enter the exponent value: ";
	cin >> exponent;

	ans = base;

	for (int i = 1; i < exponent; i++)
		ans *= base;


	cout << base << " to the power " << exponent << " is " << (double)ans << endl;


	return 0;
}
