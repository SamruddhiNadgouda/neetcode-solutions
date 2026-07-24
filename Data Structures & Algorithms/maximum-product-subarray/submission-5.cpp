class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0];
        for(int i=0; i<nums.size(); i++){
            int curr = nums[i];
            maxP = max(maxP, curr);
            for(int j = i+1; j<nums.size(); j++){
                curr *= nums[j];
                maxP = max(curr, maxP);
            }
        }
        return maxP;
    }
};
