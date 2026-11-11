class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> cnt(nums.begin(), nums.end());
        int longest = 0;
        for(int num : nums){
            if(cnt.count(num - 1) == 0){
                int length = 1;
                while(cnt.count(num + length) == 1){
                    length ++;
                }
                longest = max(longest, length);
            }
        }
        return longest;

    }
};
