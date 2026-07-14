#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    bool sorted = true;

    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Vector is Sorted";
    else
        cout << "Vector is Not Sorted";

    return 0;
}