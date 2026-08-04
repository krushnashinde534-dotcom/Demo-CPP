#include <iostream>
using namespace std;

class Student {
public:
    string name = "Krushna";
};

int main() {
    Student s;
    cout << "Name: " << s.name;
    return 0;
}