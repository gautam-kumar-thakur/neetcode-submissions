class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    bool found = false;
    int size_ = nums.size();
    std::sort(nums.begin(),nums.end());
    for(int i = 0; i < size_ - 1; i++)
    {
        if(nums[i] == nums[i+1])
        {
            found = true;
        }
    }
    return found;
    }
};