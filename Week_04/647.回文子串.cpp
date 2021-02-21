class Solution {
public:
    int countSubstrings(string s) {
        int size=s.size();
        vector<vector<bool>> dp(size,vector<bool>(size,false));
        int result=0;

        for(int i=size-1; i>=0; i--){
            for(int j=i; j<size; j++){
                if(s[i]==s[j]&&(j-i<=1||dp[i+1][j-1]==true)){
                    result++;
                    dp[i][j]=true;
                }
            }
        }
        return result;
    }
};