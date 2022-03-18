class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0), visited(26, 0);
        string res = "";
        
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        
        for(int i=0; i<s.size(); i++)
        {
            
            freq[s[i] -'a']--;
            
            if(!visited[s[i] - 'a'])
            {
                while(res.size()>0 and res.back()>s[i] and freq[res.back() - 'a']>0)
                {
                    visited[res.back()- 'a'] = 0;
                    res.pop_back();
                }
                res.push_back(s[i]);
                visited[s[i]-'a'] = 1;
            }
        }
        
        return res;
    }
};