class Solution {
public:
    int subsetSum(vector<int>& nums, int sum) {
        int n = nums.size();
        vector<vector<int>> t(n + 1, vector<int>(sum + 1, 0)); 

        for (int i = 0; i <= n; i++) {
            t[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
                else
                    t[i][j] = t[i - 1][j];
            }
        }

        return t[n][sum];
    }

    int findTargetSumWays(vector<int>& arr, int target) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

       
        if ((sum + target) % 2 != 0 || abs(target) > sum) return 0;

        int ans = (target + sum) / 2;
        return subsetSum(arr, ans);
    }
};
