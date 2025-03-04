// Write a C++ program that takes a number as input and prints its reverse.

#include <iostream>
using namespace std;

int main() {
    int num{}, reversedNum{};

    cout << "Enter a Number: ";
    cin >> num;


    while (num > 0) {
        reversedNum = (reversedNum * 10) + (num % 10); 
        num = num / 10; 
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}
