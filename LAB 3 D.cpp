#include <iostream>
using namespace std;

int main()
{
    int age;  // Age store karne ke liye variable

    cout << "Enter your age: ";
    cin >> age;

    // Agar age 18 ya us se zyada hai
    if(age >= 18)
        cout << "Aap adult hain.";
    else   // Agar condition false ho jaye
        cout << "Aap minor hain.";

    return 0;
}
