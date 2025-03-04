#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;  // Pointer to int
    int** dptr = &ptr; // Pointer to pointer

    cout << "Value of num: " << num << endl;     // 10
    cout << "Value using ptr: " << *ptr << endl; // 10
    cout << "Value using dptr: " << **dptr << endl; // 10

    return 0;
}
