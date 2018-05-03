#include<iostream>
#include<cmath>
using namespace std;
//datatype function name ( )
double hypoten(double xside, double yside) {
	double result;
	result = sqrt(xside*xside + yside * yside);
	return result;
}
int main() {
	double xside, yside;
	double result = 0;
	cout << "Please enter the length of first side: ";
	cin >> xside;
	cout << "Please enter the length of second side: ";
	cin >> yside;
	result = hypoten(xside, yside);
	cout << "Hypotenuse of a 3 by 4 right triangle is " << result << endl;
	return 0;
}