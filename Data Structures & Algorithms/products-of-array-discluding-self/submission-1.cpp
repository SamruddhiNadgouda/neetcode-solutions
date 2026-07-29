class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans(nums.size(), 1);
        // for(int i=0; i<nums.size(); i++){
        //     int val = 1;
        //     for(int j=0; j<nums.size(); j++){
        //         if(i != j){
        //             val *= nums[j];
        //         }
        //     }
        //     ans[i] = val;
        // }
        // return ans;

        // Optimal Approach
        vector<int> ans(nums.size(), 1);
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);

        // prefix
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        // suffix
        for (int i = nums.size() - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        //ans
        for(int i=0; i<nums.size(); i++){
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};
