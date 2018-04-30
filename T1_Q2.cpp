#include<iostream>
using namespace std;
int main() {
	double x;
	double a;
	double ans;

	cout << "Input x: ";
	cin >> x;

	a = ((3 + (4 * x)) / 10) - (10 * (x - 2)*(x - 2)) / (x - 3);
	ans = a * a;

	cout << "The answer when x=" << x << "is" << ans << endl;

	system("Pause");
	return 0;
}