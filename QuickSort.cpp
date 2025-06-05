#include <iostream>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1;
    int pivot = arr[end];
    for (int j = st; j < end; j++)
    {//if (arr[j]>=pivot) sort array into descending order
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void qs(vector<int> &arr, int st, int end)
{

    if (st < end)
    {

        int pivIdx = partition(arr, st, end);
        qs(arr, st, pivIdx - 1);  // left
        qs(arr, pivIdx + 1, end); // right
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    qs(arr, 0, arr.size() - 1);
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<< endl;
    return 0;
}

// partition function is responsible for dividing the array based on pivot value and setting it up in the center 
// by comaparing each value with the pivot value (end value is considered here)
// -setting up smaller values in the left and the larger values in the right of the pivot value 
// Two pointer  are use : 
// 1. idx- it is responsible for finding postion of an element in the array
// 2. j pointer is used to loop through the array and compare all elements with the pivot value
// qs function runs the same partition function and qucik sort on left subarray and right sub array.

//have average time complexity - O(n logn)
//while worst case is O(n^2) when the pivot element is chosen largest or smallest element recursively
//spcae complexity is O(1) so can be used rather than merge when data is very large