class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target) return 1;
            if(arr[low]==arr[mid] && arr[mid]==arr[high])
            {
                low=low+1;
                high=high-1;
                continue;
            }
            //left sorted
            if(arr[low]<=arr[mid])
            {
                if(arr[low]<=target && arr[mid]>=target)
                {
                    high=mid-1;
                }
                else
                low=mid+1;
            }
            else
            {
                if(arr[mid]<=target && arr[high]>=target)
                low=mid+1;
                else 
                high=mid-1;
            }
        }
        return 0;
    }
};