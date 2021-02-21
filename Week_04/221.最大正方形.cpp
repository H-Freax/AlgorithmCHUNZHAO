class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0||matrix[0].size()==0){
            return 0;
        }

        int x= matrix.size();
        int y= matrix[0].size();
        int maxside=0;
        vector<vector<int>> dp (x, vector<int>(y,0));

        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(matrix[i][j]=='1'){
                    if(i==0||j==0){
                        dp[i][j]=1;
                    }else{
                        dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                    }
                    maxside=max(maxside,dp[i][j]);
                }
            }
        }
        return maxside*maxside;

    }
};