#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // Heap memory mein ek integer allocate
    *ptr = 80;

    cout << "Dynamically allocated value: " << *ptr << endl;
    cout << "Address of dynamically allocated value: " << ptr << endl;
    cout << "Address of pointer: " << &ptr << endl;
    cout << "Size of pointer: " << sizeof(ptr) << endl;

    delete ptr; // Memory free
    return 0;
}
