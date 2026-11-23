class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0)return false;
        stack<char> st;
        unordered_map<char, char> mp = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty())return false;
                if(mp[ch] != st.top()){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
