class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] == target) {
                return { left, right };
            }
            else if (nums[left] + nums[right] < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};
