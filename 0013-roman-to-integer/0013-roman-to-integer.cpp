class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        unordered_map<char,int>mpp;
        mpp['I'] = 1;
mpp['V'] = 5;
mpp['X'] = 10;
mpp['L'] = 50;
mpp['C'] = 100;
mpp['D'] = 500;
mpp['M'] = 1000;
        int res=0;
        res+=mpp[s[n-1]];
        int back=res;
        for(int i=n-2;i>=0;i--){
            int val=mpp[s[i]];
            if(val<back){
                res-=val;
                back=val;
            }
            else
            {
                res+=val;
                back=val;
            }
        }
        return res;
    }
};