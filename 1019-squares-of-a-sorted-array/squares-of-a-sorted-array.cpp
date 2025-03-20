class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int>squares(n,0);
        int i=right;
        while(right>=left)
        {
            if(abs(nums[right])>abs(nums[left]))
            {
                squares[i]=(nums[right]*nums[right]);
                right--;
                i--;
            }
            else{
                 squares[i]=(nums[left]*nums[left]);
                left++;
                i--;
            }
        }
        return squares;
    }
};