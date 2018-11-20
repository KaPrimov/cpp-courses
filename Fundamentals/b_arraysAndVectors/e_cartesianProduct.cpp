#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	int size;
	cin >> size;
	int arr[size] = {};
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
    vector<pair<int,int>> cartesian;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cartesian.push_back(make_pair(arr[i],arr[j]));
        }  
    }

    for (int i = 0; i < cartesian.size(); i++)
    {
        cout << cartesian.at(i).first * cartesian.at(i).second << " ";
    }
}
