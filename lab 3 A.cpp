#include <iostream>   
using namespace std;  

int main()            
{
    int num1, num2;   // Do integer variables banaye

    cout << "Enter first number: ";
    cin >> num1;      // User se pehla number lena

    cout << "Enter second number: ";
    cin >> num2;      // User se doosra number lena

    if(num1 == num2)  // Check karta hai dono numbers barabar hain ya nahi
        cout << "Both numbers are equal.";

    if(num1 > num2)   // Check karta hai pehla number bara hai ya nahi
        cout << "First number is greater than second.";

    if(num1 < num2)   // Check karta hai pehla number chhota hai ya nahi
        cout << "First number is less than second.";

    return 0;         
}
