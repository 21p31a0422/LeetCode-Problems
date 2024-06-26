class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0], freq = 1, ind = 1;
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] == prev) {
                if (freq <= 1) {
                    freq++;
                    nums[ind] = nums[i];
                    ind++;
                } else {
                    freq = 1000;
                }                
            } else {
                prev = nums[i];
                freq = 1;
                nums[ind] = nums[i];
                ind++;
            }
        } return ind;
    }
};