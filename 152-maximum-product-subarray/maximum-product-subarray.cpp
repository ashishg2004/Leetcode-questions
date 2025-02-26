class Solution {
public:
    int maxProduct(vector<int>& nums) {
       long long int prefix=1;
        long long int sufix=1;
      long long  int maxx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {   
             if(prefix==0)
            prefix=1;
            if(sufix==0)
            sufix=1;
            prefix*=nums[i];
            sufix*=nums[n-i-1];
            maxx=max(maxx,max(prefix,sufix));
           
        }
        return maxx;
    }
};