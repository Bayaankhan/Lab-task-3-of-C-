#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5, average;

    cout << "Enter 5 subject marks: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    average = (m1 + m2 + m3 + m4 + m5) / 5;

    cout << "Average Marks = " << average;

    return 0;
}
