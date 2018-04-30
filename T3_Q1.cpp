#include<iostream>
using namespace std;
int main() {
	int guess;
	int a = 31;

	cout << "I have a number between 1 and 100. " << endl;
	cout << "Can you guess my number?" << endl;

	while (guess != a) {
		cout << "Guess: ";
		cin >> guess;
		if (guess > a) { cout << "Too high. Try again." << endl; }
		else if (guess < a) { cout << "Too low. Try again." << endl; }
	}
	if (guess == a) { cout << "Excellent! Correct guess." << endl; }

	return 0;
}