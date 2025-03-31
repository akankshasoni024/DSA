#include <iostream>
using namespace std;

void factorial(int i, int n) {
    if (i == 1) { 
        cout << "Factorial: " << n << endl;
        return;
    }
    factorial(i - 1, i * n);  
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n; // n is the number whoes factorial we need
    factorial(n, 1); // Start factorial calculation
    return 0;
}
