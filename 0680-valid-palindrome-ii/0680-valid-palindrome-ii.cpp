class Solution {
public:
    bool check(int i,int j,string &s,int count){
        if(count>1){
            return false;
        }
        if(count<=1 &&j<i)
        return true;
        if(s[i]==s[j])
        return check(i+1,j-1,s,count);
        bool left=check(i+1,j,s,count+1);
        bool right=check(i,j-1,s,count+1);

        return left || right;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        return check(0,n-1,s,0);
        
    }
};