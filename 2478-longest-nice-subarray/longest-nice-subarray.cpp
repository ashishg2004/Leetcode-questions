class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size(),orr=0,result=0;
        for(int i=0;i<n;i++)
        {
            int mask=0;
            for(int j=i;j<n;j++)
            {
                if((mask&nums[j])!=0){
                    break;
                }
                else
                {
                    mask|=nums[j];
                    result=max(result,(j-i+1));
                }
            }
        }
        return result;
    }
};