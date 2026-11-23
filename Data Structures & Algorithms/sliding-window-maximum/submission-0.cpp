class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> q;
        vector<int> res(n - k + 1);
        int r = 0, l = 0;

        while(r < n){
            while(!q.empty() && nums[q.back()] < nums[r]){
                q.pop_back();
            }
            q.push_back(r);

            if(l > q.front()){
                q.pop_front();
            }

            if(r + 1 >= k){
                res[l] = nums[q.front()];
                l++;
            }
            r++;
        }
        return res;
    }
};
