//Write a C++ program that takes a positive integer as input and calculates its factorial.

#include <iostream>
using namespace std;

int main() {
    int num;
    int factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= num; ++i) {
            factorial = factorial* i;
        }
        cout << "Factorial of " << num << " = " << factorial;    
    }

    return 0;
}