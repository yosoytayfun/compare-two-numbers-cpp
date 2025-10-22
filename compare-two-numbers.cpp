#include <iostream>
using namespace std;

int main() {
    int number1, number2; // both are local variables

    cout << "Enter the first integer: ";
    cin >> number1;

    cout << "Enter the second integer: ";
    cin >> number2;

    if (number1 < number2)
        cout << number1 << " is less than " << number2 << endl;
    else if (number1 > number2)
        cout << number1 << " is greater than " << number2 << endl;
    else
        cout << "Both numbers are equal." << endl;

    return 0;
}
