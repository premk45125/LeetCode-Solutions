class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        int ones=0;
        int zeroes=0;
        int count=0;
        for(int i=0;i<n;i+=2)
        {
            if(s[i]!=s[i+1])
            count++;
        }
        return count;
        // for(char ch:s){
        //     if(ch=='1')
        //     ones++;
        //     else
        //     zeroes++;
        // }
        return min(zeroes,ones);
        
    }
};