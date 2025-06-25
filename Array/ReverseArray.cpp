#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int end=size-1;
    int start= 0;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end --;
    }
}

int main(){
    int arr[6]={21,32,53,2,-1,43};
    int size =6;
    reverseArray(arr,size);
    for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<< "  ";
        }
    return 0;
}