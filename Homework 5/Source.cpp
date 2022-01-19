#include <iostream>
using namespace std;

const int SIZE = 10;
const int SIZE2 = 7;
const int SIZE3 = 7;
const int SIZE4 = 8;

int main() {

	//Task 1
	cout << "Task 1 - Enter 10 numbers:\n";

	int arr1[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cin >> arr1[i];
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << arr1[i] << ' ';
	}

	cout << endl << endl << endl;



	//Task 2

	cout << "Task 2 - Enter 7 numbers to calculate their multiplication:\n";

	int arr2[SIZE2];
	int sum = 1;
	for (int i = 0; i < SIZE2; i++) {
		cin >> arr2[i];
		sum *= arr2[i];
	}

	cout << endl << "Multiplication = " << sum;


	cout << endl << endl << endl;



	//Task 3

	cout << "Task 3 - Enter 7 numbers to check which are uneven:\n";

	int arr3[SIZE3];
	for (int i = 0; i < SIZE3; i++) {
		cin >> arr3[i];
	}

	cout << endl << "The even numbers are now 0:\n";

	for (int i = 0; i < SIZE3; i++) {
		if (arr3[i] % 2 == 0) {
			arr3[i] = 0;
			cout << arr3[i] << ' ';
		}
		else {
			cout << arr3[i] << ' ';
		}
	}

	cout << endl << endl << endl;



	//Task 4

	cout << "Task 4 - Enter 8 numbers, to see the average of them:\n";

	int arr4[SIZE4];
	double sumT4 = 0;
	int counterT4 = 0;
	for (int i = 0; i < SIZE4; i++) {
		cin >> arr4[i];
	}

	cout << endl;

	for (int i = 0; i < SIZE4; i++) {
		sumT4 = sumT4 + arr4[i];
		if (arr4[i] != 0) {
			counterT4++;
		}
	}

	cout << "Average number: " << sumT4 / counterT4 << endl;

	return 0;
}