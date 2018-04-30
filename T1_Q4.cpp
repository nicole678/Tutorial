#include<iostream>
using namespace std;
int main() {

	const double PI = 3.14159265;
	double r;
	double h;
	double v;


	cout << "Enter the radius (in cm): ";
	cin >> r;
	cout << "Enter the height (in cm): ";
	cin >> h;
	v = (PI*r*r*h) / 3;
	cout << "The volume of the cone is " << v << " cm^3" << endl;

	system("Pause");
	return 0;
}