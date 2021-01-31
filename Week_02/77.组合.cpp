class Solution {
public:
    vector<int> temp;
    vector<vector<int>> ans;
    void find(int str,int end,int k){
        if(k<=0){
            ans.push_back(temp);
            return;
        }
        for(int i=str;i<=end;i++){
            temp.push_back(i);
            find(i+1,end,k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        find(1,n,k);
        return ans;
    }    
};