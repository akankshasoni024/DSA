#include<iostream>
using namespace std;


int main(){
    int arr[5]={1,2,3,4,5};
    int size =5;
    int maxSum = INT_MIN;
    int currentSum;
    for (int st=0;st<size;st++){
        currentSum=0;
        for(int end = st; end<size; end++){
           currentSum+=arr[end];
           maxSum= max(currentSum, maxSum);   
        }   
    }
    cout<< "Max Sum ="<<maxSum;
    return 0;
}