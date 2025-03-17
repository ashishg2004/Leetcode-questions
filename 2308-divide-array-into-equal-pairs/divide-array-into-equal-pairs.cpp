class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n1=nums.size();
        int maxx = *max_element(nums.begin(),nums.end());
        vector<int>hashh(maxx+1,0);
        for(int i=0;i<n1;i++)
        {
            hashh[nums[i]]++;
        }
       long long int c=0;
       for(int i=0;i<maxx+1;i++)
        {
            if(hashh[i]%2!=0)
            c++;
        }
        if(c==0)
        return true;
        else return false;
    }
};