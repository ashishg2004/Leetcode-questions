class Solution {
public:
    int bs(vector<int>&arr,int target)
    {
        int low=0,high=arr.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
             return true;
            if(arr[mid]>target)
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]<=target && target<=matrix[i][m-1])
            return bs(matrix[i],target);
        }
        return false;
    }
};