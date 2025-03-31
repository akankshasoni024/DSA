#include <iostream>
using namespace std;

void factorial(int i, int n) {
    if (n == 1) {
        cout << "Factorial: " << n << endl;
        return;
    }
    factorial(i - 1, n * i);  
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n = 5; 
    factorial(n, 1); 
    return 0;
}
