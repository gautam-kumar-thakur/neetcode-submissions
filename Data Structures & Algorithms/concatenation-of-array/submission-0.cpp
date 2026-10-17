class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size_nums = nums.size();
        std::vector<int> ans(size_nums * 2);
        
        for( int index = 0; index < size_nums; index++)
        {
            ans[index] = nums[index];
            ans[index + size_nums] = nums[index];
        }
      return ans;  
    }
};