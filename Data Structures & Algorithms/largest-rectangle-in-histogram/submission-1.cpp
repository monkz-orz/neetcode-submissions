class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        for(int i = 0; i <= heights.size(); i++){
            while(!st.empty() && (i == heights.size() || heights[i] <= heights[st.top()])){
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : (i - st.top() - 1);
                area = max(area, height * width);
            }
            st.push(i);
        }
        return area;
    }
};
