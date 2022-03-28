class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (left==right) return left;
        int temp=0;
        for (int i=0;i<31;i++)
        {
            temp=(1<<i);
            if (temp>left && temp<=right) return 0;
        }
        long long ans=left;
        for (long long i=left+1;i<=right;i++)
        {
            ans=(ans&i);
        }
        return ans;
    }
};
