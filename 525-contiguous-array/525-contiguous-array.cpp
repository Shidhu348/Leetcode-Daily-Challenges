class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map <int, int> map;
        int sum = 0;
        int largest_subarray = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
                sum = sum - 1;
            else
                sum = sum + 1;
            
            if(sum == 0)
            {
                if(largest_subarray < i+1)
                    largest_subarray = i+1;
                
            }
            else if(map.find(sum)!= map.end())
            {
                if(largest_subarray < i-map[sum])
                    largest_subarray = i-map[sum];
            }
            else
                map[sum] = i;
        }
        
        return largest_subarray;
    }
};