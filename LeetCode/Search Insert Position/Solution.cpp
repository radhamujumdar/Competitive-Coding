class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index,last;
        last=nums.size();
        if(last==0)
            return 0;
        if(binary_search(nums.begin(),nums.end(),target))
           return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        else
        {
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target)
                    return i;
                if(target<nums[0])
                    return 0;
                if(target>nums[last-1])
                    return nums.size();
                if(last==1){
                    if(target>nums[0])
                        return 1;
                    else
                        return 0;
                }
            }
            return 0;
    }
    }
};
