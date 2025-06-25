#include<iostream>
using namespace std;


int main(){
    int arr[6]={1,2,3,4,5,6};
    int size =6;
    int largest=arr[0];
    int idx;
   
    for (int st=0;st<size;st++){
        for(int end = st; end<size; end++){
            //print
            for (int i = st; i < end; i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
            
        }
        
        
    }
   

    return 0;
}