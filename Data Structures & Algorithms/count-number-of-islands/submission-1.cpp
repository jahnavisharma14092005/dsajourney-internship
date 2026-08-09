class Solution {
public:
    int m, n;

    void dfs(vector<vector<char>>& grid, int i, int j) {

        
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0')
            return;

        
        grid[i][j] = '0';

        
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        m = grid.size();
        n = grid[0].size();

        int islands = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    islands++;
                }

            }
        }

        return islands;
    }
};

MISTAKES:-
    1. grid[i][j]='0' means assign value 0 to this cell..i wrote grid[i][j]=='0' which is checking is this grid[i][j] 0?
    2. I WAS CONFUSED HOW WILL BOTH FUNCTIONS ACCESS THINGS LIKE i and j WHEN THEY R COMMON TO BOTH FUNCTIONS,,so AS ITS DECLARED INSIDE INT NUMISLANDS FUNCTIONS THAT ITS A LOOP..
        IN OTHER FUNCTION LIST IT AS A PARAMETER,,LIKE void dfs (vector<vector<char>>& grid,`int i,int j).
    3. inside void dfs only work that dfs should do is written. number of islands calculation is inside int numIslands total nd we call dfs inside this.
