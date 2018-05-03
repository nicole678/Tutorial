#include<iostream>
using namespace std;
float integerPower(float base, int exponent)
{
	float ans = 1;
	if (exponent == 0) {
		return 1;
	}
	else if (exponent > 0)
	{
		for (int i = 1; i <= exponent; i++)
			ans *= base;
	}
	else {
		for (int i = -1; i >= exponent; i--) {
			ans /= base;
		}
	}

	return ans;
}

int main()
{
	float base;
	float ans = 0;
	int exponent;

	cout << " Enter the base value:";
	cin >> base;

	cout << " Enter the exponent value:";
	cin >> exponent;

	ans = integerPower(base, exponent);
	cout << base << " to the power " << exponent << " is " << ans << endl;

	return 0;
}
