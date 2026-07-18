#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, -5, 0, 8, -2, 0};

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}