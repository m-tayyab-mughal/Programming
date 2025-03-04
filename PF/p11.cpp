// Write a C++ program that takes a positive integer as input and counts the number of digits in it.

#include <iostream>
using namespace std;
int main() {
    int num{},digit{},count{};
    cout<< "Enter Positive Integer : ";
    cin>>num;   
    while (num > 0) {
        count++;         
        num /= 10;       
    }
    cout <<"The number of digits "<<count<<endl;
    return 0;
}
