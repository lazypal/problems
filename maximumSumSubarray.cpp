/**
 * @rohit
 * */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = 0, bestMax = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            currMax = std::max(nums[i], currMax + nums[i]);
            bestMax = std::max(currMax, bestMax);
        }
        return bestMax;
    }
};