#include <iostream>
using namespace std;

int main()
{
    // a & b: Star and Delta resistance variables
    float R1=0, R2=0, R3=0;
    float Ra=0, Rb=0, Rc=0;
    float sum=0;

    // d: User input
    cout << "Enter Star Resistance R1: ";
    cin >> R1;

    cout << "Enter Star Resistance R2: ";
    cin >> R2;

    cout << "Enter Star Resistance R3: ";
    cin >> R3;

    // e: Calculation
    sum = (R1*R2) + (R2*R3) + (R3*R1);

    Ra = sum / R1;
    Rb = sum / R2;
    Rc = sum / R3;

    // f: Display results
    cout << "\nStar Resistances\n";
    cout << "R1 = " << R1 << " ohm" << endl;
    cout << "R2 = " << R2 << " ohm" << endl;
    cout << "R3 = " << R3 << " ohm" << endl;

    cout << "\nDelta Resistances\n";
    cout << "Ra = " << Ra << " ohm" << endl;
    cout << "Rb = " << Rb << " ohm" << endl;
    cout << "Rc = " << Rc << " ohm" << endl;

    return 0;
}
