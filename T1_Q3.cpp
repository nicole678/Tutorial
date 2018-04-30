#include<iostream>
using namespace std;
int main() {
	int x;
	int a;
	int b;

	cout << "Enter a two - digit integer(00-99):";
	cin >> x;

	a = x / 10;
	b = x % 10;

	cout << "The two digits are " << a << " and " << b << endl;


	system("Pause");
	return 0;
}