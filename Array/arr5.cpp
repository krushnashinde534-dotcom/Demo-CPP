#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 20, 3, 10};
    int n = 6;

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Smallest Element = " << smallest << endl;
    cout << "Second Smallest Element = " << secondSmallest << endl;

    return 0;
}