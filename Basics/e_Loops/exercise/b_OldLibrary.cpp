#include <iostream>
#include <string>

using namespace std;

int main() {
	string searchedBook, currentBook;
	int librarySize;
	getline(cin, searchedBook);
	int count = 0;
	cin >> librarySize;
	while (librarySize != -1) {
		getline(cin, currentBook);
		if(currentBook == searchedBook) {
			cout << "You checked  " << count - 1 << " books and found it.";
			return 0;
		}
		librarySize--;
		count++;
	}
	cout << "The book you search is not here!" << endl;
	cout << "You checked " << count << " books." << endl;
	return 0;
}

