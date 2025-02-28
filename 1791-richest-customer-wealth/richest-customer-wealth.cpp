class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int n=arr.size();
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<arr[i].size();j++)
            {
                c+=arr[i][j];
            }
            maxx=max(maxx,c);
        }
        return maxx;
    }
};