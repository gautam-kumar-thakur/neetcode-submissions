class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size_ = nums.size();
        vector<int> ans(size_ * 2);
        for(int index = 0; index < size_; index++)
        {
            ans[index] = nums[index];
            ans[size_ + index] = nums[index]; 
        }
        return ans;
    }
};