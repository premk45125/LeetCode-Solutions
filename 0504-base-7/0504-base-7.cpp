class Solution {
public:
    string convertToBase7(int num) {
        int n=num;
        string res="";
        if(num<0)
        n*=-1;
            while(n>=7){
            res+='0'+ n%7;
            n/=7;

        }
        res+='0'+n;
        if(num<0)
        res+='-';
        reverse(res.begin(),res.end());

        return res;
    }
};