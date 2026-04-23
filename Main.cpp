#include <iostream>
using namespace std;

int main() {
    int n;
    int comparisons = 0;
    int swaps = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Exchange Sort with counting
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            comparisons++;
            if(arr[i] > arr[j]) {
                swaps++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Total Comparisons: " << comparisons << endl;
    cout << "Total Swaps: " << swaps << endl;

    return 0;
}
