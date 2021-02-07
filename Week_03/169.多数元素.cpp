class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int result=0;
        for (int n : nums){
            if(count==0) result=n;

            if(n==result) count++;
            else    count--;
        }
        return result;
    }
};