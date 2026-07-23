#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {12, 7, 8, 15, 20, 11};

    int even = 0, odd = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Numbers = " << even << endl;
    cout << "Odd Numbers = " << odd;

    return 0;
}