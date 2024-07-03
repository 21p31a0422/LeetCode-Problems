class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 4) return 0;
        int ln = nums.size();
        sort(nums.begin(), nums.end());
        return min(min((nums[ln - 4] - nums[0]), (nums[ln - 1] - nums[3])), min((nums[ln - 3] - nums[1]), (nums[ln - 2] - nums[2])));
    }
};