class Solution {
public:
    int dfs(vector<vector<int>>&grid,int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
            return 0;
        if(grid[i][j]==0)   return 0;
        grid[i][j]=0;
        return 1+dfs(grid, i+1,j)+dfs(grid,i-1,j)+dfs(grid, i,j+1)+dfs(grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int count=0,ans;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1)
                    {int ans=dfs(grid, i, j);
                    count=max(count,ans);
                    }
            }
        }
        return count;
    }
};
