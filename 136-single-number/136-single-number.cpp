class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map <int, int> frequency;
    for (int i=0; i<nums.size(); i++)
    {
        frequency[nums[i]]++;
    }
        
    for(int i=0; i<nums.size(); i++)
    {
        if(frequency[nums[i]]==1)
            return nums[i];
    }
        return -1;
    }
    
};