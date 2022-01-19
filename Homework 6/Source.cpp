#include <iostream>
using namespace std;

int main() {

	//Task 1

	cout << "Task 1 - Check which numbers are dividable by 3 without remains.\n";

	int nT1 = 7;

	int* arrT1 = new int[nT1];

	cout << "Enter " << nT1 << " numbers: \n";

	for (int i = 0; i < nT1; i++) {
		cin >> arrT1[i];
	}

	cout << endl << "The numbers are: \n";

	for (int i = 0; i < nT1; i++) {
		if (arrT1[i] > 4 && arrT1[i] < 99 && arrT1[i] % 3 == 0) {
			cout << arrT1[i] << endl;
			}
	}

	delete[] arrT1;

	cout << endl << endl;



	//Task 2

	cout << "Task 2 - Check which numbers are even.\n";

	int nT2 = 7;

	int* arrT2 = new int[nT2];

	cout << "Enter " << nT2 << " numbers: \n";

	for (int i = 0; i < nT2; i++) {
		cin >> arrT2[i];
	}

	cout << endl << "The even numbers are: \n";

	for (int i = 0; i < nT2; i++) {
		if (arrT2[i] % 2 == 0) {
			cout << arrT2[i] << endl;
		}
	}

	delete[] arrT2;

	return 0;
}