#include <iostream>
using namespace std;
class Phone
{
public:
	Phone(string b, string o) {
		brand = b;
		os = o;
	}
	void setPrice(int p)
	{
		price = p;
	}
	void showConfig()
	{
		cout << "brand:\t\t" << brand << endl;
		cout << "OS:\t\t" << os << endl;
		cout << "Price:\t\t$" << price << ".00" << endl;
	}
private:
	string brand;
	string os;
	int price;
};
int main() {
	Phone iPhone("Apple", "iOS version 6");
	Phone noteTwo("Samsung", "Android 4.1");

	iPhone.setPrice(5588);
	noteTwo.setPrice(4630);

	cout << "Specification of iPhone:" << endl;
	iPhone.showConfig();
	cout << "\nSpecification of Note 2:" << endl;
	noteTwo.showConfig();

	return 0;
}