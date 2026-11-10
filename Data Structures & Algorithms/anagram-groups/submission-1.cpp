class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            vector<int> cnt(26, 0);
            for(char ch : strs[i]){
                cnt[ch - 'a']++;
            }
            string key = to_string(cnt[0]);
            for(int j = 1; j < 26; j++){
                key += ',' + to_string(cnt[j]);
            }
            mp[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto& [key, value] : mp){
            res.push_back(value);
        }
        return res;
    }
};
