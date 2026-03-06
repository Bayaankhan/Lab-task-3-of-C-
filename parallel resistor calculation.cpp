#include <iostream>
using namespace std;

int main() {
    float r1 = 0, r2 = 0, r;

    cout << "Enter R1 and R2: ";
    cin >> r1 >> r2;

    r = 1 / ((1/r1) + (1/r2));

    cout << "Net Resistance = " << r;

    return 0;
}
