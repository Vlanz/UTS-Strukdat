#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Find the maximum number to know the number of digits
    int max_num = *max_element(arr, arr+n);

    // Perform counting sort for every digit
    for (int exp = 1; max_num/exp > 0; exp *= 10) {
        int output[n];
        int count[10] = {0};

        // Store count of occurrences in count[]
        for (int i = 0; i < n; i++)
            count[(arr[i]/exp)%10]++;

        // Change count[i] so that count[i] now contains
        // actual position of this digit in output[]
        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];

        // Build the output array
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i]/exp)%10] - 1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }

        // Copy the output array to arr[], so that arr[] now
        // contains sorted numbers according to current digit
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
