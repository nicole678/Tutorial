#include <iostream>
using namespace std;
class Date
{
public:
	Date(int d, int m, int y) {
		setDate(d, m, y); //Constructor
						  //refer to void setDate(int d,int m, int y)that's d,m,y
	}
	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}

	void print()
	{
		cout << day << "-" << month << "-" << year;
	}

private:
	int day;
	int month;
	int year;
};

int main() {
	// Create an object called xmas

	Date xmas(25, 12, 2013); //constructor call
	cout << "xmas is: ";
	// Use xmas object to call print()
	xmas.print();
	cout << endl;
	return 0;
}
