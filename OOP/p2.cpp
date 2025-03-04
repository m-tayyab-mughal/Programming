#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* ptr = arr;  // First element ka address store

    cout << "Value of arr: " << arr << endl;  // Address of first element
    cout << "Address of arr: " << &arr << endl;  // Address of array
    cout << "Pointer ptr holds address: " << ptr << endl;  // prt hold Address of first element
    cout << "Value at pointer ptr: " << *ptr << endl;  // 10 (Dereferencing)
    cout << "Second value: " << *(ptr + 1) << endl;  // 20
    cout << "Third value: " << *(ptr + 2) << endl;  // 30

    return 0;
}
