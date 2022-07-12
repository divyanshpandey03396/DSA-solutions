class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int carry=1;
        int i=n;
        for(i=n;i>=0;i--){
            if(digits[i]<9) {
                digits[i]=digits[i]+1;
                carry=0;
                break;
            }
            else{
                digits[i]=0;
            }
        }
        if(i+1==0 && carry!=0) {digits[0]=1;digits.push_back(0);}
        return digits;
    }
};