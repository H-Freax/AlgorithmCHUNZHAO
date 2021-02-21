class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len=tasks.size();
        vector<int> vec(26,0);
        for(char c:tasks)vec[c-'A']++;
        sort(vec.begin(),vec.end(),[](int& x,int& y){
            return x>y;
        });
        int count=1;
        while(count<vec.size()&&vec[0]==vec[count])count++;
        return max(len,count+(vec[0]-1)*(n+1));
    }
};