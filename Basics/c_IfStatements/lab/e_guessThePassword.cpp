#include <iostream>

using namespace std;

int main() {
	
	const string password = "s3cr3t!P@ssw0rd";
	string input;

	cin >> input;
	
	cout << (password == input ? "Welcome" : "Wrong password!") << endl;

	return 0;
}
