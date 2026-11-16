class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int res = 0;
        unordered_map<char, int> cnt;

        while(r < s.size()){
            cnt[s[r]]++;
            while(cnt[s[r]] > 1){
                cnt[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};
