#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n-1;i++){
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}