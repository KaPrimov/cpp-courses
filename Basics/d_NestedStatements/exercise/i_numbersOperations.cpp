#include <iostream>

using namespace std;

string evenOrOdd(int number) {
	return number % 2 == 0 ? "even" : "odd";
}

int main() {
	
	int num1, num2;
	char operation;
	cin >> num1 >> num2 >> operation;
	switch (operation) {
		case '+': {
			int resultAdd = num1 + num2;
			cout << num1 << " + " << num2 << " = " << resultAdd << " - " << evenOrOdd(resultAdd) << endl;
			break;
		}
		case '-': {
			int resultSub = num1 - num2;
			cout << num1 << " - " << num2 << " = " << resultSub << " - " << evenOrOdd(resultSub) << endl;
			break;
		}
		case '*': {
			int resultMultiplication = num1 * num2;
			cout << num1 << " * " << num2 << " = " << resultMultiplication << " - " << evenOrOdd(resultMultiplication) << endl;
			break;
		}
		case '/': {
			if (num2 == 0) {
				cout << "Cannot divide " << num1 << " by zero" << endl;
					return 0;
			}
			double resultDel = num1 / (double) num2;
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << num1 << " / " << num2 << " = " << resultDel << endl;
			break;
		}
		case '%': {
			if (num2 == 0) {
				cout << "Cannot divide " << num1 << " by zero" << endl;
				return 0;
			}
			cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			break;
		}
	}

	return 0;
}

