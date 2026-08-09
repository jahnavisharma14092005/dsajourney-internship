class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int r=grid.size();
          int c=grid[0].size();
           int maxarea=0;
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                     if(grid[i][j]==0)
                            return;
                                if(grid[i][j]==1)
                                   int area=dfs(grid,r,c);
                                   maxarea=max(area,maxarea);
                }
            }

              


    }
      int dfs(grid,r,c)
      {
           return 1+ dfs(grid,r-1,c)+ dfs(grid,r+1,c)+ dfs(grid,r,c-1)+ dfs(grid,r,c+1); 
      }
};
