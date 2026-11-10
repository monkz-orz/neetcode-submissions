class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int count_zero = 0;
        int n = nums.size();
        vector<int> res(n, 0);
        vector<int> res0(n, 0);
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                count_zero++;
                continue;
            }
            product *= nums[i];
        }
        for(int j = 0; j < n; j++){
            if(count_zero == 1){
                if(count_zero == 1 && nums[j] == 0){
                res0[j] = product;
                return res0;
                }
                continue;
            }
            else if(count_zero > 1){
                return res0;
            }
            else{
                res[j] = product / nums[j];
            }
        }
        return res;
    }
};
