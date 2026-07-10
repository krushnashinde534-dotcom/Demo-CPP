#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {12, 45, 6, 89, 21};

    cout << "Maximum = " << *max_element(v.begin(), v.end());

    return 0;
}