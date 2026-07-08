#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

    void display() {
        cout << brand << endl;
        cout << price;
    }
};

int main() {
    Car c;

    c.brand = "Toyota";
    c.price = 1200000;

    c.display();

    return 0;
}