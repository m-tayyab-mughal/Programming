// Write a C++ program that takes a number as input and prints its multiplication table (1 to 10).

#include <iostream>
using namespace std;

int main()
{
    int num{};
    cout << "Please Enter Number for table: ";
    cin >> num;
    
    for(int i {1}; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    
    return 0;
}
