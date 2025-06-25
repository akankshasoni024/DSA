#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twosum(vector<int> & arr,int target){
    vector<int> ans;
    unordered_map<int,int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        int first =arr[i];
        int sec=target-first;

        if(m.find(sec) !=m.end()){
            ans.push_back(m[sec]);
            ans.push_back(i);
            break;
        }
        m[first]=i;
    }
    return ans;
}

int main(){
    vector<int>arr={2,4,1,3};
    int target=7;
    vector<int> result=twosum(arr,target);
    cout<<result[0]<<','<<result[1];
}