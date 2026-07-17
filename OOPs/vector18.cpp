#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 50, 40, 30};

    int largest = v[0];
    int secondLargest = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > largest) {
            secondLargest = largest;
            largest = v[i];
        }
        else if (v[i] > secondLargest && v[i] != largest) {
            secondLargest = v[i];
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}