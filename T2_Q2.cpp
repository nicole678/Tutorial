#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "Please input a number: ";
	cin >> x;
	cout << "Is " << x << " even ? ";
	if (x % 2 == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	//cout << ((num % 2 == 0) ? "Yes” : "No") << endl; 
 
 

	system("Pause");
	return 0;
}
