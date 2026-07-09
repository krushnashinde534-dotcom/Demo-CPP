#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    void area() {
        cout << "Area = " << 3.14 * radius * radius;
    }
};

int main() {
    Circle c;

    c.radius = 7;

    c.area();

    return 0;
}