#include<iostream>
#include<iomanip>
using namespace std;
int main() {

	double a, b, c, d, e;
	cout << "Please input five numbers: " << endl;
	cin >> a >> b >> c >> d >> e;
	cout << setw(4) << " x" << setw(11) << "x^2" << setw(10) << "x^3" << endl;
	cout << setw(3) << "-----" << setw(10) << "-----" << setw(10) << "-----" << endl;
	cout << fixed << setprecision(3) << a << setw(10) << a * a << setw(10) << a * a * a << endl;
	cout << b << setw(10) << b * b << setw(10) << b * b * b << endl;
	cout << c << setw(10) << c * c << setw(10) << c * c * c << endl;
	cout << d << setw(10) << d * d << setw(10) << d * d * d << endl;
	cout << e << setw(10) << e * e << setw(10) << e * e * e << endl;

	system("Pause");
	return 0;
}