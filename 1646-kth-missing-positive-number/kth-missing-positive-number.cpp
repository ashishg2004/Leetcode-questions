class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
        unordered_set<int> arrSet(arr.begin(), arr.end()); // Faster lookup
        
        int i = 1;
        while (ans.size() < k) { // Continue until we find k missing numbers
            if (arrSet.find(i) == arrSet.end()) {
                ans.push_back(i);
            }
            i++; // Increment to check the next number
        }
        return ans[k - 1]; 
    }
};
