#include <iostream>
using namespace std;

int main()
{
    int num1{},num2{},num3{};
    cout<< "please enter 1st number = " ;
    cin>>num1;
    cout<< "please enter 2nd number = " ;
    cin>>num2;
    cout<< "please enter 3rd number = " ;
    cin>>num3;
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"Largest Number is "<<num1;
        }
        else
        {
            cout<<"Largest Number is "<<num3;
        }
    }
    else if(num3>num2)
    {
        cout<<"Largest Number is "<<num3;

    }
    else
    {
        cout<<"Largest Number is "<<num2;

    }
    
    return 0;
}