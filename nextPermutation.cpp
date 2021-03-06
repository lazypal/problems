/**
 * @rohit
 * */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        while(i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }
        if(i >= 0) {
            int j = nums.size()-1;
            while(nums[i] >= nums[j]) {
                j--;
            }
            std::swap(nums[i], nums[j]);
        }
        i++;
        int j = nums.size()-1;
        while(i <= j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
};