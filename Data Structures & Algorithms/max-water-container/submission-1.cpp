class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int start = 0, end = heights.size() - 1;
        while (start < end) {
            int width = end - start;
            int height = min(heights[start], heights[end]);
            int area = width * height;
            maxWater = max(maxWater, area);
            heights[start] < heights[end] ? start++ : end--;
        }
        return maxWater;
    }
};
