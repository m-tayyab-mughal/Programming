#include <iostream>
using namespace std;

int main() {
    int* ptr = new int[3]; // Dynamic array allocation

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    cout << "First value: " << ptr[0] << endl;
    cout << "Second value: " << ptr[1] << endl;
    cout << "Third value: " << ptr[2] << endl;

    delete[] ptr; // Free the memory

    return 0;
}
