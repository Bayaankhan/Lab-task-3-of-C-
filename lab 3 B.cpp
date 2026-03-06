#include <iostream>
using namespace std;

int main()
{
    int num;  // Ek integer variable

    cout << "Enter an integer: ";
    cin >> num;  // User se input lena

    // && ka matlab hai AND
    // Dono conditions true honi chahiye
    if(num > 0 || num < 100)
        cout << "Number 0 se bara aur 100 se chhota hai.";
    else
        cout << "Number dono conditions puri nahi karta.";

    return 0;
}
