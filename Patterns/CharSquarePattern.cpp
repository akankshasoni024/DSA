#include<iostream>
using namespace std;
int main(){
    int n =5;
    char charr='A';
    for (int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cout<<charr;
            charr=charr+1;
        }
        cout<<endl;
    }
    return 0;
}