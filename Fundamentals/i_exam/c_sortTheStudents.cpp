#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {

	class Student {
		private:
			std::string fullName;
			int avgScore;

			void setName(std::string firstName, std::string lastName) {
				this->fullName = firstName + " " + lastName;
			}

			void setAvgScore(int avgScore) {
				this->avgScore = avgScore;
			}
		public:
			Student(std::string firstName, std::string lastName, double avgScore) {
				this->setName(firstName, lastName);
				this->setAvgScore(avgScore);
			}

			std::string getName() {
				return this->fullName;
			}

			int getAvgScore() {
				return this->avgScore;
			}

			void printStudent() {
				std::cout << this->fullName << " " << this->avgScore << std::endl;
			}
	};

	int n;
	std::string firstName, lastName;
	int avgScore;
	std::cin >> n;
	std::vector<Student> allStudents;
	for (int i = 0; i < n; i++) {
		std::cin >> firstName >> lastName >> avgScore;
		Student student(firstName, lastName, avgScore);
		allStudents.push_back(student);
	}

	std::sort(allStudents.begin(), allStudents.end(),
		[](Student& s1, Student& s2) -> bool {
			if (s1.getAvgScore() == s2.getAvgScore()) {
				return 0;
			}
			return s1.getAvgScore() > s2.getAvgScore();
		});
	std::for_each(allStudents.begin(), allStudents.end(), [](Student& s) {s.printStudent();});
	std::cout << std::endl;
	std::sort(allStudents.begin(), allStudents.end(),
		[](Student& s1, Student& s2) -> bool {
			if (s1.getName().compare(s2.getName()) == 0) {
				return 0;
			}
			return s1.getName().compare(s2.getName());
		});
	std::for_each(allStudents.begin(), allStudents.end(), [](Student& s) {s.printStudent();});

	return 0;
}

