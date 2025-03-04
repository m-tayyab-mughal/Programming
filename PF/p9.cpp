// Write a C++ program that takes a number as input and checks whether it is a palindrome or not.
#include <iostream>
using namespace std;
int main() {
    int num{}, reversedNum{0};
    cout<<"Enter a number = ";
    cin>>num;
    int orgnum{num};

    while(num>0)
    {
        reversedNum=(reversedNum * 10)+(num % 10);
        num = num / 10;

    }
    cout<< "Reverse "<<reversedNum<<endl;

    if (reversedNum==orgnum)
    {
        cout<< orgnum<<" is a Palindrome Number. "<<endl;
    }
    else
    {
        cout<< orgnum<<" is not a Palindrome Number. "<<endl;
    }
    return 0;
}
