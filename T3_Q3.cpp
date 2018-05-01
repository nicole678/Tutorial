#include<iostream>
using namespace std;
int main() {

	int a, b, ans;

	cout << "Please input value A : ";
	cin >> a;
	cout << "Please input value B : ";
	cin >> b;

	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	cout << "Sum of odd integers from " << a << " to " << b << " is " << ans << endl;

	return 0;
}