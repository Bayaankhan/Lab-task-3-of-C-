#include <iostream>
using namespace std;

int main() {
    float length = 0, width = 0, area = 0, perimeter = 0;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter;

    return 0;
}
