#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num; // Pointer 'ptr' num ka address store karega

    cout << "Value of num: " << num << endl;     // 10
    cout << "Address of num: " << &num << endl; // num ka address
    cout << "Pointer ptr holds address: " << ptr << endl; // num ka address
    cout << "Value at pointer ptr: " << * ptr << endl; // 10 (Dereferencing)
    cout << "Address of ptr itself: " << &ptr << endl; // ptr ka address
    return 0;
}