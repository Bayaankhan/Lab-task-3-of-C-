#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float base, perpendicular, hypotenuse;

    cout << "Enter Base and Perpendicular: ";
    cin >> base >> perpendicular;

    hypotenuse = sqrt(base*base + perpendicular*perpendicular);

    cout << "Hypotenuse = " << hypotenuse;

    return 0;
}
