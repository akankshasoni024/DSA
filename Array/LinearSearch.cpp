#include<iostream>
using namespace std;

int linearSearch(int arr[],int target, int size){
     for (int i=0;i<size-1;i++){ //O(n)
        if(arr[i]==target){
            return i;
        }
     }
        return -1;
}
int main(){
    int arr[6]={21,32,53,2,-1,43};
    int size =6;
    int target ;
    cin>>target;
    int result = linearSearch(arr,target,size);
    cout<<result;
   


    return 0;
}