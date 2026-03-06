#include <iostream>
using namespace std;

int main()
{
    float R1=0, R2=0;   // Resistances
    float It=0;         // Total current
    float I1=0, I2=0;   // Branch currents

    // Input
    cout<<"Enter R1: ";
    cin>>R1;

    cout<<"Enter R2: ";
    cin>>R2;

    cout<<"Enter Total Current: ";
    cin>>It;

    // Calculation
    I1 = It * R2/(R1+R2);
    I2 = It * R1/(R1+R2);

    // Output
    cout<<"R1 = "<<R1<<endl;
    cout<<"R2 = "<<R2<<endl;
    cout<<"Total Current = "<<It<<endl;

    cout<<"I1 = "<<I1<<endl;
    cout<<"I2 = "<<I2<<endl;

    return 0;
}
