#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	class Student {
		private:
			string name;
			string surname;
			double average;
		public:
			Student(string name, string surname, double average) {
				this->name = name;
				this->surname = surname;
				this->average = average;
			}

			double getAverage() {
				return this->average;
			}

			void print() {
				cout << this->name << " " << this->surname << " " << this->average << endl;
			}
	};

	int n;
	cin >> n;
	string name, surname;
	double average;
	double totalAverage = 0;
	for (int i = 0; i < n; i++) {
		cin >> name >> surname >> average;
		Student student = Student(name, surname, average);
		student.print();
		totalAverage += student.getAverage();
	}

	cout << totalAverage / n;

	return 0;
}
