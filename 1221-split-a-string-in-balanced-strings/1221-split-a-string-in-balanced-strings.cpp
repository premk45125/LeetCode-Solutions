class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int count=0;
        int l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
            l++;
            else
            l--;
            if(l==0)
            count++;
        }
        return count;
        
    }
};