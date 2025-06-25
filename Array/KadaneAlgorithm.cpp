//This algorithm is used to find the maximum sum subarray

#include<iostream>
using namespace std;


int main(){
    int arr[6]={1,-2,3,4,-4,5};
    int size =6;
    int maxSum = INT_MIN;
    int currentSum=0;
    for (int i=0;i<size;i++){
        currentSum+=arr[i];
        maxSum= max(currentSum, maxSum); 
        if(currentSum<0){
            currentSum=0;
        }

    }
    cout<< "Max Sum ="<<maxSum;
    return 0;
}

//This algo works by re initaillizing the sum as 0 if the sum becomes negative
// This is beause if the sum is negative it will always lead to decrement in the value instead of adding for the maximum subarray