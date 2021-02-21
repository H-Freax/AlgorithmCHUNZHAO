class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int x=grid.size();
        int y=grid[0].size();
        vector<vector<int>> dp(x,vector<int>(y,0));
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                dp[i][j]=grid[i][j];
                if(j>=1&&i>=1){
                    dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);
                }else{
                    if(j>=1){dp[i][j]+=dp[i][j-1];}
                    if(i>=1){dp[i][j]+=dp[i-1][j];}
                }
            }
        }
        return dp[x-1][y-1];
    }   
};