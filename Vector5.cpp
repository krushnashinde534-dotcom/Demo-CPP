#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Reverse: ";

    for(int i = nums.size() - 1; i >= 0; i--) {
        cout << nums[i] << " ";
    }

    return 0;
}