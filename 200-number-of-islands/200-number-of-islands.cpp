class Solution {
    
    
    void iter_cur_island(vector<vector<char>>& grid, int x, int y, int m, int n)
    {
        if (x<0 or x>=m or y<0 or y>=n or grid[x][y]!= '1')
            return;
        
        grid[x][y] = '2';
        iter_cur_island(grid, x+1, y, m, n);
        iter_cur_island(grid, x-1, y, m, n);
        iter_cur_island(grid, x, y+1, m, n);
        iter_cur_island(grid, x, y-1, m, n);
        
    }
    
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if (rows == 0)
            return 0;
        int cols = grid[0].size();
        int no_of_islands = 0;
        for (int i=0; i<rows; i++)
        {
            for (int j=0; j<cols; j++)
            {
                if(grid[i][j] == '1')
                {
                    iter_cur_island(grid, i, j, rows, cols);
                    no_of_islands += 1;
                }
            }
        }
        
        return no_of_islands;
    }
};