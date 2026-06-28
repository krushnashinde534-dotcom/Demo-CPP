#include <iostream>
#include <climits>   // Required for INT_MAX

using namespace std;

int main() {
    int nums[] = {5, 78, 56, 25, -89, -94};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
     smallest = min(nums[i], smallest);
     largest = max(nums[i], largest);
    }

    cout << "Smallest = " << smallest << endl;

    return 0;
}