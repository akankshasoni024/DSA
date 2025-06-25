#include<iostream>
using namespace std;


int main(){
    int arr[6]={21,32,53,2,-1,43};
    int size =6;
    int largest=arr[0];
    int idx;
   
    for (int i=0;i<size-1;i++){
        
        largest =max(arr[i],largest);
        
    }
    cout<< largest<<endl;

    return 0;
}