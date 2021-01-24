class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int t;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                t=nums[j];
                nums[j]=nums[i];
                nums[i]=t;
                j++;
            }
        }
    }
};