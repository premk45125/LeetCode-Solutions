class Solution {
public:
    int maxPower(string s) {
        int n=s.length();
        int count=1;
        int maxi=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])
            count++;
            else{
                maxi=max(count,maxi);
                count=1;
            }
        }
        maxi=max(count,maxi);
        return maxi;
        
    }
};