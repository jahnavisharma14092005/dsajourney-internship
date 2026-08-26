class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        // { {i,j}, time }
        queue<pair<pair<int,int>, int>> q;

        // Put ALL rotten oranges (2) into queue first
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }

        int ans = 0;

        // BFS
        while (!q.empty()) {

            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;

            q.pop();

            ans = max(ans, time);

            // UP
            if (i - 1 >= 0 && !vis[i-1][j] && grid[i-1][j] == 1) {
                q.push({{i-1, j}, time + 1});
                vis[i-1][j] = true;
            }

            // RIGHT
            if (j + 1 < m && !vis[i][j+1] && grid[i][j+1] == 1) {
                q.push({{i, j+1}, time + 1});
                vis[i][j+1] = true;
            }

            // DOWN
            if (i + 1 < n && !vis[i+1][j] && grid[i+1][j] == 1) {
                q.push({{i+1, j}, time + 1});
                vis[i+1][j] = true;
            }

            // LEFT
            if (j - 1 >= 0 && !vis[i][j-1] && grid[i][j-1] == 1) {
                q.push({{i, j-1}, time + 1});
                vis[i][j-1] = true;
            }
        }

        // Check if any fresh orange remains
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 1 && !vis[i][j]) {
                    return -1;
                }
            }
        }

        return ans;
    }
};
