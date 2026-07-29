class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int lt = 0, rt = heights.size() - 1;
        while (lt < rt) {
            int width = rt - lt;
            int height = min(heights[lt], heights[rt]);
            int area = width * height;
            maxWater = max(maxWater, area);
            heights[lt] < heights[rt] ? lt++ : rt--;
        }
        return maxWater;
    }
};
