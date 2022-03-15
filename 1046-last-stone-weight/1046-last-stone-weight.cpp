class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int size = stones.size();
        priority_queue<int> max_heap;
        
        for(int i=0; i<size; i++)
            max_heap.push(stones[i]);
        
        int first;
        int second;
        
        while(size > 1)
        {
            first = max_heap.top();
            max_heap.pop();
            second = max_heap.top();
            max_heap.pop();
            size -= 2;
            
            if(first-second > 0)
            {
                max_heap.push(first-second);
                size += 1;
            }
        }
        
        if(!max_heap.empty())
            return max_heap.top();
        return 0;
    }
};