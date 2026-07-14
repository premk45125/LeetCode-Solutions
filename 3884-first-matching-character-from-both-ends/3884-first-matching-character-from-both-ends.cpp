class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.length();
        int limit=n/2;
        if(n%2==0)
        limit-=1;
        
        int i=0;
        while(i<=limit){
            if(s[i]==s[n-1-i])
            return i;
            i++;
        }
        return -1;
    }
};