class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int rows=0,col=n-1;
        while(col>=0 && rows<m)
        {
            int item=matrix[rows][col];
            if(target<item)
            {
                col--;
            }
            else if(target>item)
            {
                rows++;
            }
            else
            return true;
        }
        return false;
        
    }
};