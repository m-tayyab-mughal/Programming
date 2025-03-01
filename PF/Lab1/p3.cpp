//Write a C++ program that takes a number as input and checks whether it is even or odd.

#include <iostream>
using namespace std;

int main() {
    int num{};

    cout << "Please Enter  Number: ";
    cin >> num;

    if (num%2==0) 
    {
        
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }

    return 0;
}
