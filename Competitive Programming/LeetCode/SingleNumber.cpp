class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;   
        for (int num : nums) {
            m[num]++;
        }
        for (auto it : m) {
            if (it.second == 1) {
                return it.first;
            }
        }
        return -1; 
    }
};
//The above fucntion have O(n) space and time complexity so it can be reduced using xor operation
//4^1^2^2^1 =4  there it has constant space complexity as O(1) 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for (int val : nums) {
           ans=ans^ val;

        }
         return ans;
    }
};
