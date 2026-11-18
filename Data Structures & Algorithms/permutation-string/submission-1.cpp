class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())return false;

        vector<int> cnts1(26, 0);
        vector<int> cnts2(26, 0);
        int matches = 0;

        for(int i = 0; i < s1.size();i++){
            cnts1[s1[i] - 'a']++;
            cnts2[s2[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(cnts1[i] == cnts2[i])matches++;
        }


        int l = 0;
        for(int r = s1.size(); r < s2.size();r++){
            if(matches == 26)return true;

            cnts2[s2[r] - 'a']++;
            if(cnts2[s2[r] - 'a'] == cnts1[s2[r] - 'a']){
                matches++;
            }
            else if(cnts2[s2[r] - 'a'] == cnts1[s2[r] - 'a'] + 1){
                matches--;
            }

            int index = s2[l] - 'a';

            cnts2[index]--;
            if(cnts2[index] == cnts1[index]){
                matches++;
            }
            else if((cnts2[index] + 1) == cnts1[index]){
                matches--;
            }
            l++;
        }
        return matches == 26;
    }
};
