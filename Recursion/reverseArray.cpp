#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int left, int right) {
    if (left >= right) return;
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    if (!(cin >> n) || n <= 0) {  // Ensure valid input
        cerr << "Error: Invalid or missing array size!" << endl;
        return 1;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {  // Ensure valid array elements
            cerr << "Error: Invalid array input!" << endl;
            return 1;
        }
    }

    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
