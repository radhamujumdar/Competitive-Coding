class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        if(target>nums[size-1])
            return nums.size();
        else
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();


    }
};
