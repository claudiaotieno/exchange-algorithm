#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

// Exchange Sort Function
void exchangeSort(int arr[], int n, long long &comparisons, long long &swaps) {
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
}

int main() {
    int n;
    long long comparisons = 0;
    long long swaps = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamic allocation for large datasets
    int* arr = new int[n];

    // Seed random generator
    srand(time(0));

    // Generate random numbers
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100000;
    }
   
    if(n <= 20) {
        cout << "\nOriginal array:\n";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Perform Exchange Sort
    exchangeSort(arr, n, comparisons, swaps);
   
    if(n <= 20) {
        cout << "\nSorted array:\n";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Output performance metrics
    cout << "\nSorting complete.\n";
    cout << "Total Comparisons: " << comparisons << endl;
    cout << "Total Swaps: " << swaps << endl;

    // Free memory
    delete[] arr;

    return 0;
}
