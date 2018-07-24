#include "./../../../../Include/Common.h"


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int count = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                nums[count++] = nums[i - 1];
            }
        }
        nums[count++] = nums[nums.size() - 1];
        return count;
    }
};