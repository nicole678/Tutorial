#include<iostream>
using namespace std;
int main() {

	int num;
	double sum;
	double ans;
	double i = 0;

	do {
		cout << "Input an integer: ";
		cin >> num;

		if (num>0) {
			sum += num;
			i++;
		}

	} while (num != 0);

	ans = sum / i;
	cout << "Average of all positive values is " << ans << endl;

	return 0;
}
