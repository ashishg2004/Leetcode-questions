class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int sym=0;
        for(int i=low;i<=high;i++)
        {
            int digits=0;
            int temp=i;
            while(temp!=0)
            {
                temp=temp/10;
                digits++;
            }
            if(digits%2==1)
            continue;
            int s1=0,s2=0;
            temp=i;
            for(int j=0;j<digits;j++)
            {
                if(j<digits/2)
                s1+=temp%10;
                else
                s2+=temp%10;
                temp=temp/10;
            }
            if(s1==s2)
            sym++;
        }
        return sym;
    }
};