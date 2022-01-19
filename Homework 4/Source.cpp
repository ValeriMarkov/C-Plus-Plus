#include <iostream>
using namespace std;

double area(double a, double b);
int greaterOfTwo(int a, int b);

int main() {

	cout << "Task 1 - Calculate triangle area\n";

	double a, h;
	cout << "Enter base:\n";
	cin >> a;
	cout << endl;
	cout << "Enter height:\n";
	cin >> h;
	cout << endl;
	cout << "Area = " << area(a, h) << endl << endl << endl;



	cout << "Task 2 - Greater of two values\n";

	int first, second;
	cout << "Enter first value: \n";
	cin >> first;
	cout << endl;
	cout << "Enter second value: \n";
	cin >> second;
	cout << endl;
	greaterOfTwo(first, second);
	cout << endl;

	return 0;
}


//Task 1
double area(double a, double b) {
	return (a / 2) * b;
}



//Task 2
int greaterOfTwo(int a, int b) {
	if (a > b) {
		cout << "The greater value is: " << a;
		return a;
	}
	else if (a < b) {
		cout << "The greater value is: " << b;
		return b;
	}
	else {
		cout << "The values are even.";
	}
}