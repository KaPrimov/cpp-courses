#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double length, width, sideWardrobe;

    cin >> length >> width >> sideWardrobe;
    sideWardrobe *= 100;
    double roomAreaCms = (length * 100) * (width * 100);
    double wardrobeArea = pow(sideWardrobe, 2);
    double benchSize = roomAreaCms / 10;
    double freeSpace = roomAreaCms - wardrobeArea - benchSize;
    int countDancers = floor(freeSpace / (40 + 7000));

    cout << countDancers;

    return 0;
}
