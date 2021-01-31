class Solution {
public:
    int nthUglyNumber(int n) {
        int two=0;int three=0;int five=0;
        vector<int> dp(n);
        dp[0]=1;

        for(int i=1;i<n;i++){
            int t1=dp[two]*2;
            int t2=dp[three]*3;
            int t3=dp[five]*5;
            dp[i]=min(min(t1,t2),t3);
        
            if(t1==dp[i]){++two;}
            if(t2==dp[i]){++three;}
            if(t3==dp[i]){++five;}
        }
        return dp[n-1];


    } 
};