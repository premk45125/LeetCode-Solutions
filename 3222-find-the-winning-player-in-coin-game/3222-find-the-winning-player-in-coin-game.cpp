class Solution {
public:
    string winningPlayer(int x, int y) {
        int ans=y/4;
        ans=min(ans,x);
        if(ans%2!=0)
        return "Alice";
        else
        return "Bob";
        
    }
};