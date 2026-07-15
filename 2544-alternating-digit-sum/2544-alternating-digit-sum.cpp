class Solution {
public:
    int alternateDigitSum(int n) {
        int sign=-1;
        string s=to_string(n);
        int size=s.length();
        if(size%2==1)
        sign*=-1;

        int sum=0;
        for(int i=size-1;i>=0;i--){
            sum+=(sign)*(s[i]-'0');
            sign*=-1;
        }
        return sum;
        
    }
};