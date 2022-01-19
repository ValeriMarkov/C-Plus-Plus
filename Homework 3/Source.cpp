#include<iostream>
using namespace std;

int main() {

	//Task 1------------------------------------------

	cout << "Task 1 - Total of all equations:\n\n";

	double n = 1;
	double i = n + 1;
	double res1 = 0;
	double res2 = 0 + res1;
	for (res2 = res1 + res2; n <= 100; n++) {

		i = n + 1;
		res1 = n / i;
		res2 = res2 + res1;
	}
	cout << res2;

	cout << endl << endl << endl;

	//Task 2------------------------------------------

	cout << "Task 2 - Multiplication table\n\n";
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << j << "*" << i << "\t";

		}
		cout << endl;
	}

	cout << endl << endl << endl;

	//Task 3------------------------------------------

	cout << "Task 3 - Triangle shape\n\n";
	int n2;
	cout << "Enter triangle lenght: ";
	cin >> n2;
	cout << endl;

	for (int i = 1; i <= n2; i++) {
		for (int j = n2 - i; j > 0; j--)
			cout << " ";
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}
