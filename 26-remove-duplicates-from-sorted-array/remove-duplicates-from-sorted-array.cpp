class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0], index = 1;
        for(int i = 1; i < nums.size(); i++) {
            if (prev != nums[i]) {
                prev = nums[i];
                nums[index] = nums[i];
                index++;
            }
        } return index;
    }
};