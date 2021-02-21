class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')return 0;
        int pre=1;int corr=1;
        for(int i=1;i<s.size();i++){
            int temp=corr;
            if(s[i]=='0'){
                if(s[i-1]=='1'||s[i-1]=='2')corr=pre;
                else return 0;
            }else if(s[i-1]=='1'||(s[i-1]=='2'&&s[i]>='1'&&s[i]<='6')){
                corr+=pre;
            }
            pre=temp;

        }
        return corr;
    }
};