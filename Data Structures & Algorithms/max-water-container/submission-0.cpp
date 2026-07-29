class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        for(int i=0; i<heights.size(); i++){
            for(int j=i+1; j<heights.size(); j++){
                int width = j-i;
                int height = min(heights[i], heights[j]);
                int area = width * height;

                maxWater = max(maxWater, area);
            }
        }
        return maxWater;
    }
};
