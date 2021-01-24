class Solution {
public:
    void reverse(vector<int>& num,int left,int right){
        int t;
        while(left<right){
            t=num[left];
            num[left++]=num[right];
            num[right--]=t;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);        
    }
};