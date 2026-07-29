class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        for(int i=0; i<nums.size(); i++){
            int val = 1;
            for(int j=0; j<nums.size(); j++){
                if(i != j){
                    val *= nums[j];
                }
            }
            ans[i] = val;
        }
        return ans;
    }
};
