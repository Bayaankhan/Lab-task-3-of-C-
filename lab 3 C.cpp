#include <iostream>
using namespace std;

int main()
{
    int num;  // Variable declare kiya

    cout << "Enter an integer: ";
    cin >> num;

    // Agar number 0 se bara hoga to ye chalega
    if(num > 0)
        cout << "Number positive hai.";

    return 0;
}
