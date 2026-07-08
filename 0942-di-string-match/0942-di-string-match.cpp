class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int>ans;
        int l=0;
        int r=n;
        int j=0;
        while(j<n){
            if(s[j]=='I'){
                ans.push_back(l);
                l++;
            }
            else
            {
                ans.push_back(r);
                r--;
            }
            j++;
        }
        for(int k=l;k<=r;k++){
            ans.push_back(k);
        }
        return ans;
        
    }
};