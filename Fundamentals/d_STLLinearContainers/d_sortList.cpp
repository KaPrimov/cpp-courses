#include <iostream>
#include <list>

bool SortPredicate_Descending (const int& lsh, const int& rsh);

int main() {
	int size, number;
	std::cin >> size;
	std::list<int> numbers(size, -111);
	for (int i = 0; i < size; i++) {
		std::cin >> number;
		numbers.push_back(number);
	}
	numbers.sort(SortPredicate_Descending);

	std::list<int>::const_iterator i;
	for (i = numbers.begin(); i != numbers.end(); ++i) {
		int currentNum = *i;
		if (currentNum != -111) {
			std::cout << currentNum;
		}
	}
	return 0;
}

bool SortPredicate_Descending (const int& lsh, const int& rsh)
{
    return (rsh < lsh);
}
