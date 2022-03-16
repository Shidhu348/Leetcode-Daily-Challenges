class Solution {
public:
    bool checkValidString(string s) {
        stack<int> openP, starS;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                openP.push(i);
            else if(s[i]=='*')
                starS.push(i);
            else
            {
                if(!openP.empty())
                    openP.pop();
                else if(!starS.empty())
                    starS.pop();
                else 
                    return false;
            }   
        }
        while(!openP.empty())
        {
            if(starS.empty())
                return false;
            else 
                if(openP.top() < starS.top())
                {
                    openP.pop();
                    starS.pop();
                }
                else return false;
        }
        return true;
    }
};