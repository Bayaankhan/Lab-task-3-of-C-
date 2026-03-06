#include <iostream>
using namespace std;

int main()
{
    int num;  // Variable banaya

    cout << "Enter an integer: ";
    cin >> num;

    // Pehle check karega positive hai ya nahi
    if(num > 0)
        cout << "Number positive hai.";

    // Agar pehli condition false ho to ye check hoga
    else if(num < 0)
        cout << "Number negative hai.";

    // Agar dono false ho jayein to matlab zero hai
    else
        cout << "Number zero hai.";

    return 0;
}
