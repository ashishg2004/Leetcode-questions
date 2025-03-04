class Solution {
public:
    bool isPowerOfThree(int n) {
        long long int res=1;
        while(res<n)
        {
            res=res*3;
        }
        if(res==n)
        return true ;
        else return false;
    }
};