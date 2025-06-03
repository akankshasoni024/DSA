#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        printArr(arr, n);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 3, 2};
    BubbleSort(arr, n);
}

// Time Complexity- 0(n^2)
// largest element will reach to its correct location after each pass