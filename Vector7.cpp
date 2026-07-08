#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == key) {
            cout << "Number found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Number not found.";
    }

    return 0;
}