class Solution {
public:

    string encode(vector<string>& strs) {
        string st = "";
        for(int i = 0; i < strs.size(); i++){
            st += to_string(strs[i].size()) + "#" + strs[i];
        }
        return st;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> res;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string st = s.substr(j + 1, length);
            res.push_back(st);
            i = j + 1 + length;
        }
        return res;

    }
};
