#include <iostream>
using namespace std;

int main() {
    int num1{}, num2{};

    cout << "Please Enter 1st Number: ";
    cin >> num1;
    cout << "Please Enter 2nd Number: ";
    cin >> num2;

    int sum {num1 + num2};
    int difference {num1 - num2};
    int product {num1 * num2};

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;

    if (num2 != 0) {
        int quotient {num1 / num2};
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Cannot divide by zero!" << endl;
    }

    return 0;
}
