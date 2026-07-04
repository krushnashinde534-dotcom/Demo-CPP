#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {8, 25, 13, 90, 45};

    int largest = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }

    cout << "Largest = " << largest;

    return 0;
}