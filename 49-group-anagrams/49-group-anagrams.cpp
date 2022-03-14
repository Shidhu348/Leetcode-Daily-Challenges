class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        string temp;
        for(int i=0; i<strs.size(); i++)
        {
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            map[strs[i]].push_back(temp);
        }
        
        
        vector<vector<string>> result;
        for(auto itr=map.begin(); itr!=map.end(); itr++)
        {
            result.push_back(itr->second);
        }
        
        return result;
    }
};