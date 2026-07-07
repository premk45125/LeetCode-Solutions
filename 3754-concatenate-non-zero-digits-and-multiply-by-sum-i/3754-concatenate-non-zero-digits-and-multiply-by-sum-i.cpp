class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string res="";
        int sum=0;
        for(char ch:s){
            if(ch!='0'){
                res+=ch;
                sum+=(ch-'0');
            }
        }
        if(sum==0)
        return 0;
        else return sum*stoll(res);
        
    }
};