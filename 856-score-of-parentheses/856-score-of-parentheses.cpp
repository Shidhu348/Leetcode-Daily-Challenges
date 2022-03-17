class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push(-1);
            }
            else
            {
                if(st.top() == -1)
                {
                    st.pop();
                    st.push(1);
                }
                else
                {   
                    int val =0;
                    while(st.top()!= -1)
                    {
                        int x = st.top();
                        val += x;
                        st.pop();
                    }
                    st.pop();
                    st.push(2*val);
                    
                }
            }
        }
        
        int val =0;
        while(!st.empty())
        {
            int x = st.top();
            val += x;
            st.pop();
        }

        
        return val;
    }
};