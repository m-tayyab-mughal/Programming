#include <iostream>
using namespace std;

int main()
{
    int num1{}, num2{};
    
    cout << "Please Enter 1st Number = ";
    cin >> num1;
    
    cout << "Please Enter 2nd Number = ";
    cin >> num2;
    
   int sum{num1 + num2};
    
    cout << "Sum is " << num1 << " + " << num2 << " = " << sum << endl;
    
    return 0;
}