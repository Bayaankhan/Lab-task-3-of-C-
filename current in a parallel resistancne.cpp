#include <iostream>
using namespace std;

int main() {
    float r1, r2, I, I1, I2;

    cout << "Enter R1 and R2: ";
    cin >> r1 >> r2;

    cout << "Enter Total Current: ";
    cin >> I;

    I1 = I * (r2 / (r1 + r2));
    I2 = I * (r1 / (r1 + r2));

    cout << "Current through R1 = " << I1 << endl;
    cout << "Current through R2 = " << I2;

    return 0;
}
