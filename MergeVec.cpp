#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    v1.insert(v1.end(), v2.begin(), v2.end());

    for (int x : v1) {
        cout << x << " ";
    }

    return 0;
}