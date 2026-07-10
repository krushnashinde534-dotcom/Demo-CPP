#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {8, 3, 6, 1, 9};

    sort(v.begin(), v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}