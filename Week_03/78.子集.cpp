class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void back(vector<int>&nums,   int index){
        result.push_back(path);
        if(index>=nums.size()){
            return ;
        }
        for(int i=index;i<nums.size();i++){
            path.push_back(nums[i]);
            back(nums,i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear();
        path.clear();
        back(nums,0);
        return result;
    }
};