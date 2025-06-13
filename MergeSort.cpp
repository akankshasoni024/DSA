#include <iostream>
#include<vector>
using namespace std;


void merge(vector<int> &arr,int st,int mid,int end)
{//TC is O(n) total
    vector<int> temp;
    int i= st ,j=mid+1;
    while(i <=mid && j<=end ){
        //if(arr[i]>arr[j]) if we store greater element than it will be descending order sorting
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

//leftover merging
    while(i<=mid){
        temp.push_back(arr[i]);
            i++;
    }
     while(j<=end){
        temp.push_back(arr[j]);
            j++;
    }

//to copy the content of temp into hte original array
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
}

void mergesort(vector<int> &arr,int st,int end)
{
    if (st < end)
    {
        int mid = st + ((end - st) / 2);
        mergesort(arr, st, mid);      // left
        mergesort(arr, mid + 1, end); // right

        merge(arr, st, mid, end);
    }
}


int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
mergesort(arr,0,arr.size()-1);

for (int val : arr){
    cout<<val<<" ";
}
cout<<endl;

    return 0;
}


//mergesort is a recursive function which divides the arry into to parts regularly until single element is left
//in this mid is calculated and than called the same function for left and right subarray
//merge function is use to perform mainly 3 things //involves backtracking:
//1. divide the left and right array and assign starting index of both as i and j
//than checks if the element of i is smalller or larger. if i is smaller than push in temp array and i++ and vice verca
//2. than if the array is left than push it into the temporary array
//3. copy the temp array again in the original array

//TC is calculated by total recursive call *work done in each call
//Total recursive calls = n+ n/2+n/4+n/8.... 1(size is 1) hence n/2^k =log n base 2 => log n
//work done in each call = merge sort = constant time + merge = O(n)
// So final TC is O(n log n)
//Space Complexity is O(N) due to temp array