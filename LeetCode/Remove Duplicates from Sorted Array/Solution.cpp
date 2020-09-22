class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto ind = std::unique(nums.begin(), nums.end());
      nums.erase(ind, nums.end());
        return nums.size();
    }
};
