class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curSum =0;
        int count = 0;
        unordered_map <int, int> map;
        for (auto it: nums)
        {
            curSum += it;
            if(curSum == k)
                count++;
            if(map.find(curSum-k)!= map.end())
                count += map[curSum -k];
            map[curSum]++;
        }
        return count;
    }
};