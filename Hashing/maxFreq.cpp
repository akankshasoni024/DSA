#include <iostream>
#include <vector>
#include <map>
using namespace std;


    int mostFrequentElement(vector<int>& nums) {
        map<int, int> mpp;-
        for (int num : nums) {
            mpp[num]++;
        }

        int maxFreq = 0, res = nums[0];
        for (auto& [key, value] : mpp) {
            if (value > maxFreq || (value == maxFreq && key < res)) {
                maxFreq = value;
                res = key;
            }
        }

        return res;
    }


int main() {
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    
    cout << mostFrequentElement(arr) << endl;
    return 0;
}
