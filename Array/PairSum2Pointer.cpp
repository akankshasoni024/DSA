//Pair sum using 2 pointer approach

#include<iostream>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int i=0, j=arr.size()-1;
    int psum;
    while ((i<j))
    {
        psum=arr[i]+arr[j];
        if(psum>target){
            j--;
        }
        else if(psum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int target =8;
    vector<int>result =pairSum(arr,target); 
    cout<<result[0]<<" "<<result[1];
    return 0;
}