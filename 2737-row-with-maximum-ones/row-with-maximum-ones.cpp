class Solution {
public:
    int lowerbound(vector<int>& arr, int x, int n) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {  
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;  
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxx = -1;
        int index = -1;
        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < m; i++) {  
            int ones = count(mat[i].begin(), mat[i].end(), 1);  // **Minimal Change**
            if (ones > maxx) {
                maxx = ones;
                index = i;
            }
        }
        return {index, maxx};
    }
};
