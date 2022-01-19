#include <iostream>
using namespace std;

int main() {

	//Task 1
	cout << "Task 1:" << endl;

	    int t1a = 7;
		int t1b = 1;
	    int t1c = 0;
	
	while (t1c <= 91) {
		cout << t1a * t1b << " ";
		t1c = t1a * t1b;
		t1b++;
	}



	cout << endl;
	cout << endl;
	cout << endl;



	//Task 2
	cout << "Task 2:" << endl;

	int t2a = 7;
	int t2b = 1;
	int t2c = 0;

	while (t2c <= 91) {
		if (t2c % 2 == 0) {
			cout << t2a * t2b << " ";
		}
		t2c = t2a * t2b;
		t2b++;
	}
	


	cout << endl;
	cout << endl;
	cout << endl;



	//Task 3
	cout << "Task 3:" << endl;

	int t3a = 1;
	int t3b = 3;
	while (t3a <= 2187) {
		cout << t3a << " ";
		t3a = t3a * 3;
	}



	cout << endl;
	cout << endl;
	cout << endl;



	//Task 4
	cout << "Task 4:" << endl;

	int t4a = 1;
	int t4b;
	cout << "Enter number: ";
	cin >> t4b;
	while (t4a <= t4b) {
		if (t4a % 3 == 0 && t4a % 5 == 0)
		cout << t4a << " ";
		t4a++;
	}



	cout << endl;
	cout << endl;
	cout << endl;



	//Task 5
	cout << "Task 5:" << endl;

	int month;
	cout << "Enter month number: ";
	cin >> month;

	switch (month) {
	case 1: cout << month << " - January.\n"; break;
	case 2: cout << month << " - February.\n"; break;
	case 3: cout << month << " - March.\n"; break;
	case 4: cout << month << " - April.\n"; break;
	case 5: cout << month << " - May.\n"; break;
	case 6: cout << month << " - June.\n"; break;
	case 7: cout << month << " - July.\n"; break;
	case 8: cout << month << " - August\n"; break;
	case 9: cout << month << " - September\n"; break;
	case 10: cout << month << " - October\n"; break;
	case 11: cout << month << " - November\n"; break;
	case 12: cout << month << " - December\n"; break;
	default: cout << month << " - Invalid month!\n"; break;
	}



	cout << endl;
	cout << endl;
	cout << endl;



	//Task 6
	cout << "Task 6:" << endl;

	int year;
	cout << "Enter year: ";
    cin >> year;
	int t6a = year / 1000;
	int t6b = year % 1000 / 100;
	int t6c = year % 100 / 10;
	int t6d = year % 10;
	
	if (t6a == t6b || t6a == t6c || t6a == t6d ||
		t6b == t6c || t6b == t6d ||
		t6d == t6c)
    {
		cout << "Happy year.";
	}

	else {
		cout << "Not a happy year.";
	}
	
	cout << endl;

	return 0;
}