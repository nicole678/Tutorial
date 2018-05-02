
#include<iostream>
using namespace std;
int main() {
	int type;
	double ir;
	int pv;
	cout << "What is the principal value?";
	cin >> pv;
	cout << "Please enter the customer type: ";
	cin >> type;
	switch (type) {
	case 0: cout << "Interest payable after one year: $" << pv * 0.005 << endl; break;
	case 1: cout << "Interest payable after one year: $" << pv * 0.008 << endl; break;
	case 2: cout << "Interest payable after one year: $" << pv * 0.01 << endl; break;
	case 3: cout << "Interest payable after one year: $" << pv * 0.012 << endl; break;
	case 4: cout << "Interest payable after one year: $" << pv * 0.02 << endl; break;
	default: cout << " Error in customer type " << endl;

	}
	return 0;
}