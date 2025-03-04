#include <iostream>
using namespace std;

int main() {
    int num{}, reversedNum{}, originalNum{};

    cout << "Enter a Number: ";
    cin >> num;

    originalNum = num; 
    
    while (num > 0) {
        reversedNum = (reversedNum * 10) + (num % 10); 
        num /= 10; 
    }

    cout << "Reversed Number: " << reversedNum << endl;

    if (reversedNum == originalNum) {
        cout << "Palindrome" << endl;
    } 
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
