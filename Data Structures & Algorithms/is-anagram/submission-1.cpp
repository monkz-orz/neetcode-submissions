class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size(), n = t.size();
        if(m != n)return false;
        unordered_map<char, int> cnt;
        for(int i = 0; i < m; i ++){
            cnt[s[i]]++;
        }
        for(int j = 0; j < n; j++){
            cnt[t[j]]--;
            if(cnt[t[j]] < 0)return false;
        }
        return true;
    }
};
