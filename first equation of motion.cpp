#include <iostream>
using namespace std;

int main()
 {
    float u = 0, a = 0, t = 0, v = 0;

    cout << "Enter Initial Velocity: ";
    cin >> u;

    cout << "Enter Acceleration: ";
    cin >> a;

    cout << "Enter Time: ";
    cin >> t;

    v = u + (a * t);

    cout << "Final Velocity = " << v;

    return 0;
}
