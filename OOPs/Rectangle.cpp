#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    void area() {
        cout << "Area = " << length * width;
    }
};

int main() {
    Rectangle r;

    r.length = 10;
    r.width = 5;

    r.area();

    return 0;
}