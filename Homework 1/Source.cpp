# include <iostream>
using namespace std;
int main()
{

	cout << "Task 1 - Solve area (S) for rectangle.\n";
	int a;
	int b;
	cout << "Enter lenght (l): ";
	cin >> a;
	cout << "Enter width (w): ";
	cin >> b;
	int result = a * b;
	cout << "S = " << result << endl;
	cout << endl;
	cout << endl;



	cout << "Task 2 - Smaller or bigger.\n";
	int n;
	int m;
	cout << "Enter a number for sign 'N': ";
	cin >> n;
	cout << "Enter a number for sign 'M': ";
	cin >> m;
	cout << endl;
	if (n > m) {
		cout << "N " << "is greater then " << "M" << endl;
	}
	else if (m >n) {
		cout << "M " << "is greater then " << "N" << endl;
	}
	else {
		cout << "N " << "is equal to " << "M" << endl;
	}
	cout << endl;
	cout << endl;



	cout << "Task 3 - True (1) or false (0) for logic operators.\n";

	int e, f;
	cout << "Enter value for 'a': ";
	cin >> e;
	bool c = e;
	cout << "Enter value for 'b': ";
	cin >> f;
	bool d = f;
	cout << endl;
	cout << "Results:" << endl;
	cout << "a && b = " << (c && d) << endl;
	cout << "a || b = " << (c || d) << endl;
	cout << "a ^ b = " << (c ^ d);



	cout << endl;
	cout << endl;

	cout << "Task 4 - Speed check.\n";
	double speed;
	cout << "Enter speed: " << endl;
	cin >> speed;

	if (speed <= 10) {
		cout << "slow" << endl;
	}
	else if (speed > 10 && speed <= 50) {
		cout << "average" << endl;
	}
	else if (speed > 50 && speed <= 150) {
		cout << "fast" << endl;
	}
	else if (speed > 150 && speed <= 1000) {
		cout << "ultra fast" << endl;
	}
	else if (speed > 1000) {
		cout << "extremely fast" << endl;
	}

	cout << endl;
	cout << endl;



	cout << "Task 5 - Is this grade valid ?\n";

    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    switch (grade) {
    case 2: cout << grade << " is a valid grade.\n"; break;
    case 3: cout << grade << " is a valid grade.\n"; break;
    case 4: cout << grade << " is a valid grade.\n"; break;
    case 5: cout << grade << " is a valid grade.\n"; break;
    case 6: cout << grade << " is a valid grade.\n"; break;
    default: cout << grade << " is not a valid grade.\n"; break;
    }


	return(0);
}