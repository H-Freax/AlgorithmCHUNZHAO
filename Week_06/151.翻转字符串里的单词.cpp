class Solution {
public:
    string reverseWords(string s) {
        stack<string> sta;
        string res,tmp;
        istringstream is(s);
        while(is >> tmp){
            sta.push(tmp);
            sta.push(" ");
        }

        if(!sta.empty()){
            sta.pop();
        }
        while(!sta.empty()){
            res+=sta.top();
            sta.pop();
        }
        return res;

    }
};