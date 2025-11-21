#include<iostream>
using namespace std;
void printArr(int arr[], int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}




void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int smallestIdx=i;
        for (int j = i+1; j < n; j++)
        {   
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        // swap with unsorted part start
        swap(arr[i],arr[smallestIdx]);
    }
    printArr(arr, n);
    
}

// i=0 j=1
//4,1,5,3,2
//s -----us-
//1 4   5 3 2
// 1 2  5 3 4





int main (){
    int n= 5;
    int arr[]={4,1,5,3,2};
    selectionSort(arr,n);
    return 0;
}





//Complexity- O(n^2)- worst case
//smallestIdx - assumed that i is smallest no. so initialiized with i first
//later compared with J and if found smaller than j is stored in smalllestIdx var
// For descending order just change   if(arr[j]>arr[smallestIdx]) 
//Because than it will swap for opposite condition when smallest index is smalller than swap