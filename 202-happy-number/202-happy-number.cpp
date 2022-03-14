class Solution {
public:
    
    
    bool isHappy(int n) {
        
        unordered_map<int, int> set;
        int val;
        int index;
        while(1)
        {
            val=0;
            while(n)
            {
                index=n%10;
                val+=index*index;
                n=n/10;
            }
            if(val==1)
                return true;
            else
                if(set[val]>1)
                {
                    return false;
                }
                else
                {
                    set[val]++;
                    n = val;
                }
        }
        return false;
    }
};