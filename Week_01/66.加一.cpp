class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=1;
        for (int i=digits.size()-1; i>=0;   i--){
            if(digits[i]+flag>9){
                digits[i]=0;
            }else{
                digits[i]+=flag;
                flag=0;
                break;
            }
        }
        if(flag==1){
            vector<int>result;
            result.push_back(1);
            for(int i :digits){
                result.push_back(i);
            }
            
            return result;
        }
        return digits;
    }
};