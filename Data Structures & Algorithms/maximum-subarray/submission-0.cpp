class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for(int st=0; st<nums.size(); st++){
            int currSum = 0;
            for(int end=st; end<nums.size(); end++){
                currSum += nums[end];
                if(currSum > maxSum){
                    maxSum = currSum;
                }
            }
        }
        return maxSum;
    }
};
