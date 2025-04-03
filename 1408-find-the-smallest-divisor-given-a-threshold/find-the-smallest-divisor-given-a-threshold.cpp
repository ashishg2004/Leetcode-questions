class Solution {
public:
   bool possible(vector<int>& nums, int threshold,int x)
    {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
        sum += ceil((double)(nums[i]) / (double)(x));
        }
        if(sum<=threshold)
        return true;
        else
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1;
    int high=*max_element(nums.begin(),nums.end());
    while(low<=high)
    {
        int mid=(low+high)/2;
        if (possible(nums,threshold,mid))
        high=mid-1;
        else
        low=mid+1;
    }     
    return low;
    }
 
};