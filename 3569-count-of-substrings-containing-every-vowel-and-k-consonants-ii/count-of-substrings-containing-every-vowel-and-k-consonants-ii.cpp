class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        return atleastk(word, k) - atleastk(word, k + 1);
    }

    long long atleastk(string s, int k) {
        unordered_map<char, int> mp;
        int left = 0, cons = 0;
        long long ans = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (isVowel(ch)) mp[ch]++;
            else cons++;

            while (mp.size() == 5 && cons >= k) {
                ans += (s.length() - i);
                if (isVowel(s[left])) {
                    if (--mp[s[left]] == 0) mp.erase(s[left]);
                } else cons--;
                left++;
            }
        }
        return ans;
    }

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
};
