#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    int first = v[0];

    for (int i = 0; i < v.size() - 1; i++) {
        v[i] = v[i + 1];
    }

    v[v.size() - 1] = first;

    cout << "After Left Rotation: ";

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}