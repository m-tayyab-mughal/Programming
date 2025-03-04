#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    void setBrand(string brand) {
        this->brand = brand;
    }

    void display() {
        cout << "Car Brand: " << brand << endl;
    }
};

int main() {
    Car car;
    car.setBrand("Toyota");
    car.display();

    return 0;
}
