#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5};
    vector<int> v2 = {2, 4, 6};
    vector<int> ans;

    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j]) {
            ans.push_back(v1[i]);
            i++;
        } else {
            ans.push_back(v2[j]);
            j++;
        }
    }

    while (i < v1.size()) {
        ans.push_back(v1[i]);
        i++;
    }

    while (j < v2.size()) {
        ans.push_back(v2[j]);
        j++;
    }

    cout << "Merged Sorted Vector: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}