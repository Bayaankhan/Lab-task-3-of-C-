#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    root1 = (-b + sqrt(d)) / (2*a);
    root2 = (-b - sqrt(d)) / (2*a);

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2;

    return 0;
}
