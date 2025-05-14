class Solution {
public:
int f(vector<int>&arr,int i,vector<int>&dp)
{
    if(i<0)
    return 0;
    if(i==0)
    return arr[i];
    if(dp[i]!=-1) //memoization
    return dp[i];
    int pick=arr[i]+f(arr,i-2,dp);
    int notpick=0+f(arr,i-1,dp);
    return dp[i] = max(pick,notpick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(nums,n-1,dp);
    }
};