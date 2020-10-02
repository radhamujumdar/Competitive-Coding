class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            std::rotate(nums.begin(),nums.begin()+nums.size()-1,nums.end());
        }
    }
};
