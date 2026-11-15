class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size_ = nums.size();
        for(int i = 0; i < size_; i++ )
        {
            for(int j = 0; j < size_; j++)
            {
             if(nums[i] + nums[j] == target && i != j)
             {
                return {i,j};
             }  
            }
        }
    }
};
