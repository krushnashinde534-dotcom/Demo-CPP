#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int n, x;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    cout << "Vector Elements: ";

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}