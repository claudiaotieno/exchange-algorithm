#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
