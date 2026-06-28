#include <iostream>
#include <climits>   // Required for INT_MAX

using namespace std;

int main() {
    int nums[] = {5, 78, 56, 25, -89, -94};
    int size = 6;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    cout << "Smallest = " << smallest << endl;

    return 0;
}