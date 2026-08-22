class Solution {
public:
    int solve(int m, int n, vector<vector<int >>& dp){
        if(m==1 || n==1)    return 1;
        if(dp[m-1][n-1]!=-1)    return dp[m-1][n-1];
        int path1= solve(m,n-1,dp);
        int path2= solve(m-1,n,dp);
        
        return dp[m-1][n-1]=path1+path2;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return solve( m, n, dp);
    }
    /*
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)    return 1;

        int path1= uniquePaths(m,n-1);
        int path2= uniquePaths(m-1,n);

        return path1+path2;
    }
    */
};
