#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    long long comparisons = 0;
    long long swaps = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    // Auto-generate values instead of manual input
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100000;
    }

    // Exchange Sort
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

    cout << "Sorting complete.\n";
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swaps << endl;

    delete[] arr;
    return 0;
}
