#include <iostream>
using namespace std;

int main() {
    float radius = 0, circumference = 0;
    float pi = 3.14;

    cout << "Enter Radius: ";
    cin >> radius;

    circumference = 2 * pi * radius;

    cout << "Circumference = " << circumference;

    return 0;
}
