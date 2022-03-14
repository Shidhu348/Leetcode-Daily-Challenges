class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1="";
        string str2="";
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]>='a' and s[i]<='z')
                str1.push_back(s[i]);
            else
                if(!str1.empty())
                    str1.pop_back();
            i++;
        }
        i=0;
        while(t[i]!='\0')
        {
            if(t[i]>='a' and t[i]<='z')
                str2.push_back(t[i]);
            else
                if(!str2.empty())
                    str2.pop_back();
            i++;
        }
        if(str1.compare(str2)==0)
            return true;
        else 
            return false;
    }
};