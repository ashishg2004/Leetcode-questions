class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int prefsum=0;
        int even=0;
        int odd=0;
        int cnt=0;
        int MOD=1e9+7;
        for(int i=0;i<arr.size();i++)
        {
            prefsum+=arr[i];
            if(prefsum%2==0)
            {
                even++;
                cnt=cnt+odd % MOD;
            }
            else{
                odd++;
                cnt=(cnt+even+1) %MOD;
            }
        }
        return cnt;
    }
};