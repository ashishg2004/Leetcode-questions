class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k)
    {
        int n=bloomDay.size();
        long long val = m * 1ll * k * 1ll;
        if(val> n)
        return -1;
      long long int low=*min_element(bloomDay.begin(),bloomDay.end());
      long long int high=*max_element(bloomDay.begin(),bloomDay.end());
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(possible(bloomDay,m,k,mid))
        high=mid-1;
        else
        low=mid+1;
       }
       return low;
    }
    bool possible(vector<int>& bloomDay, int m, int k,int bloom)
    {
        int n=bloomDay.size();
        int b=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
                if(bloomDay[i]<=bloom)
                {
                    cnt++;
                }
                else
                {
                    b+=cnt/k;
                    cnt=0;
                }
        }
        b+=cnt/k;
        if(b>=m)
        return true;
        else 
        return false;
    }
};