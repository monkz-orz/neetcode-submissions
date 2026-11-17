class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> cnt;
        int l = 0, r = 0;
        int maxf = 0, res = 0;
        
        while(r < s.size()){
            cnt[s[r]]++;
            maxf = max(maxf, cnt[s[r]]);
            while(((r - l + 1) - maxf) > k){
                cnt[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};
