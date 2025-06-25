#include<iostream>
using namespace std;


int main(){
    int arr[6]={21,32,53,2,-1,43};
    int size =6;
    int smallest =INT_MAX;

    for (int i=0;i<size-1;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<< smallest;
    return 0;
}