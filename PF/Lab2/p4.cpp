// Write a C++ program that takes a positive integer as input and prints the sum of its digits.

#include <iostream>
using namespace std;
int main() {
    int num{},sum{},digit{};
    cout<< "Enter Positive Integer : ";
    cin>>num;
    int orgnum{num};
    if(num<0)
    {
        cout<<"Please Enter Positive Integer only"<<endl;
        return 0;
    }
    while (num > 0) {
        digit = num % 10;  
        sum += digit;         
        num /= 10;       
    }
    cout <<"The Sum of digits "<<orgnum<<" is "<<sum<<endl;
    return 0;
}
