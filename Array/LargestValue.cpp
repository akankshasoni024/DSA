#include<iostream>
using namespace std;


int main(){
    int arr[6]={21,32,53,2,-1,43};
    int size =6;
    int largest =INT_MIN;
int idx;
   
    for (int i=0;i<size-1;i++){
        if(arr[i]>largest){
            largest=arr[i];
            idx=i;
        }
    }
    cout<< largest<<endl;
    cout<<idx;

    return 0;
}