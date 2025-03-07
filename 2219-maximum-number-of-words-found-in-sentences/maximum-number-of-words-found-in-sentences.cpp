class Solution {
public:
    int mostWordsFound(vector<string>& s) {
      int cnt=0,maxx=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s[i].size();j++)
            {
                if(s[i][j]==' ')
                cnt++;
            }
            cnt++;
            maxx=max(maxx,cnt);
            cnt=0;
        }
          return maxx;
    }
  
};