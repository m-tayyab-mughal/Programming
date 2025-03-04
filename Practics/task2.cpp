#include <iostream>
using namespace std;

int main()
{
    int num{};
    cout<< "Please Enter one number to check EVEN or ODD ";
    cin>>num;
    if(num%2==0)
    {
        cout<<num<<" is Even";
    }
    else
    {
        cout<<num<<" is Odd";
    }
    return 0;
}