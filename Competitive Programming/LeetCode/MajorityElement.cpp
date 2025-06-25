/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int > hash;
        int largest = INT_MIN;
        for (auto it : nums){
            hash[it]++;
            
        }
        int n = nums.size();
        for (auto it : hash){
            if(it.second >largest && it.second > n/2)
            largest =it.first;
        }

        return largest;
    }
};