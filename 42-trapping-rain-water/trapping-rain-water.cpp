class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
        vector<int>lmax(n,0);
        vector<int>rmax(n,0);
        int maxx=0,maxx1=0;
        //Calculating left max
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,height[i]);
            lmax[i]=maxx;
            cout<<lmax[i]<<" ";
        }
        //Calculating right max
        for(int i=n-1;i>=0;i--)
        {
            maxx1=max(maxx1,height[i]);
            rmax[i]=maxx1;
            cout<<rmax[i]<<" ";
        }
        //Calculating ans
        int ans=0;
       for(int i=0;i<n;i++)
       {
        ans=(ans)+(min(lmax[i],rmax[i]))-height[i];
       }
    return ans;
    }
};