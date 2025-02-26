class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        int maxi=INT_MIN;
        int maxx=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            if(sum1>maxi)
            maxi=sum1;
            if(sum1<0)
            sum1=0;
        }
         for(int i=0;i<nums.size();i++)
        {
            sum2+=nums[i];
            if(sum2<maxx)
            maxx=sum2;
            if(sum2>0)
            sum2=0;
        }

        return max(abs(maxi),abs(maxx));
    }
};