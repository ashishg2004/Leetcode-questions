class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        while(i<nums.size())
        {
            swap(nums[i-1],nums[i]);
            i=i+2;
        }
        return nums;
    }
};