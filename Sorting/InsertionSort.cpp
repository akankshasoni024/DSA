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

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while (  prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
        printArr(arr, n);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 3, 2};
    InsertionSort(arr, n);
}

// Time Complexity- 0(n^2)
// smallest element will reach to its correct location after each pass
// curr: for current element that shows starting of unsorted which we are trying to insert
// prev: Used to scan the sorted portion from right to left and find the correct position for curr.