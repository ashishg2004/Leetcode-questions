class Solution {
public:
    int countdays(vector<int>& weights,int cap)
    {
        int load=0,days=1;
        for(int i=0;i<weights.size();i++)
        {
            if(load+weights[i]>cap)
            {
                days++;
                load=weights[i];
            }
            else
            {
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        int high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int d=countdays(weights,mid);
            if(d<=days)
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return low;
    }
};