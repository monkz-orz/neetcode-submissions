class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int l_Max = height[l];
        int r_Max = height[r];
        int res = 0;

        while(l < r){
            if(l_Max < r_Max){
                l++;
                l_Max = max(l_Max, height[l]);
                res += l_Max - height[l];
            }
            else{
                r--;
                r_Max = max(r_Max, height[r]);
                res += r_Max - height[r];
            }
        }

        return res;
    }
};
