

class Solution {
public:
    // Previous smaller element
    vector<int> getThePreviousSmallerElement(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> prevSmaller(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                prevSmaller[i] = st.top();
            } else {
                prevSmaller[i] = -1;
            }
            st.push(i);
        }
        return prevSmaller;
    }

    // Next smaller element
    vector<int> getTheNextSmallerElement(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> nextSmaller(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nextSmaller[i] = st.top();
            } else {
                nextSmaller[i] = n;
            }
            st.push(i);
        }
        return nextSmaller;
    }

    // Main function
    vector<int> maxOfMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> prevSmaller = getThePreviousSmallerElement(arr, n);
        vector<int> nextSmaller = getTheNextSmallerElement(arr, n);

        vector<int> ans(n, INT_MIN);

        // Fill ans based on window size
        for (int i = 0; i < n; i++) {
            int windowSize = nextSmaller[i] - prevSmaller[i] - 1;
            ans[windowSize - 1] = max(ans[windowSize - 1], arr[i]);
        }

        // Fill remaining entries
        for (int i = n - 2; i >= 0; i--) {
            ans[i] = max(ans[i], ans[i + 1]);
        }

        return ans;
    }
    
};