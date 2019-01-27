#include <iostream>
#include <string>

	class Date {
			int date;
			int month;
			int year;
		public:
	Date(int date = 1, int month = 1, int year = 1900) {
				this->date = date;
				this->month = month;
				this->year = year;
			}

		void print() {
				std::cout << date << "/" << month << "/" << year << std::endl;
			}
	
	};

	class Student {
			std::string name;
			int visits;
			Date birthday;
		public:
			Student(std::string name, int visits, Date birthday) {
				this->name = name;
				this->visits = visits;
				this->birthday = birthday;
			}
	};
	
int main () {
	
	int n;
	std::cin >> n;
	
	

	return 0;
}
