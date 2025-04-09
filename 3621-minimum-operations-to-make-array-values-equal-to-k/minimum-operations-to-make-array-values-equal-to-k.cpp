class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int mini=*min_element(st.begin(),st.end());
        if(mini<k)
        return -1;
        if(st.find(k)!=st.end())
        return st.size()-1;
        else
        return st.size();
    }
};