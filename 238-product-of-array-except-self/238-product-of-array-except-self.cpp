class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int rightProduct = 1;
        vector <int> result;
        result.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            result.push_back(result[i-1]*nums[i]);
        }
        for(int i=nums.size()-1; i>0; --i)
        {
            result[i] = result[i-1]*rightProduct;
            rightProduct = rightProduct*nums[i];
        }
        result[0] = rightProduct;   
        
        return result;
    }
};