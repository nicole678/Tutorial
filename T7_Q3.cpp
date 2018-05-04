#include <iostream>
using namespace std;

class Car
{
public:
	Car() {
		speed = 0;
	}

	void showSpeed() {
		cout << "The car is moving at " << speed << " km/h." << endl;
	}

	void accelerate(int a) {
		cout << "Accelerating ... " << endl;
		// Your code for part (b) should be inserted here
		speed += a;
		//increasing by a so + a
		if (speed >= 150)speed = 150;
	}

	// Your code for part (c) should be inserted here
	void decelerate(int d) {
		cout << "Decelerating ... " << endl;
		speed -= d;
		if (speed<0)speed = 0;
	}
	// Your code for part (d) should be inserted here
	void stop() {
		cout << "Stopping ... " << endl;
		speed = 0;
	}
private:
	int speed;   // speed of the car, in km/h
};

int main() {
	Car myCar;

	myCar.showSpeed();
	myCar.accelerate(70);
	myCar.showSpeed();
	myCar.decelerate(20);
	myCar.showSpeed();
	myCar.accelerate(120);
	myCar.showSpeed();
	myCar.decelerate(100);
	myCar.showSpeed();
	myCar.stop();
	myCar.showSpeed();

	return 0;
}
