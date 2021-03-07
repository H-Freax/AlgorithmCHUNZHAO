class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.empty()){
            return s;
        }
        int n=s.size();
        for(int i=0;i<n;i+=2*k){
            int start=i;
            int end=min(n,i+k);
            reverse(s.begin()+start,s.begin()+end);
        }
        return s;
    }
};