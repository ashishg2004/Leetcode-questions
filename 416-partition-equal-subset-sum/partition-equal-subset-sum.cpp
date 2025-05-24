class Solution {
public:
    bool subsetsum(vector<int>& nums, int sum)
    {
        int n = nums.size();
        vector<vector<int>> t(n + 1, vector<int>(sum + 1));

        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < sum + 1; j++)
            {
                if (i == 0)
                    t[i][j] = 0;
                if (j == 0)
                    t[i][j] = 1;
                if (i > 0 && j > 0) {
                    if (nums[i - 1] <= j)
                        t[i][j] = t[i - 1][j - nums[i - 1]] || t[i - 1][j];
                    else
                        t[i][j] = t[i - 1][j];
                }
            }
        }

        return t[n][sum];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        if (sum % 2 != 0)
            return false;
        return subsetsum(nums, sum / 2);
    }
};
