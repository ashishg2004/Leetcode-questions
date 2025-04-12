class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
       int cnt=0;
       int maxx=INT_MIN;
       for(auto &i:mp)
       {
        if(i.second>maxx)
        maxx=i.second;
       }
       for(auto &i:mp)
       {
        if(i.second==maxx)
        cnt+=maxx;
       }
       return cnt;
    }
};