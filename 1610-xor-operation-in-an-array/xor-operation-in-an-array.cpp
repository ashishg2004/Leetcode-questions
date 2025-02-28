class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        int xorr=0;
        for(int i=0;i<n;i++)
        {
            nums.push_back(start + 2 * i);
            xorr=xorr^nums[i];
            cout<<nums[i];
        }
        return xorr;
    }
};