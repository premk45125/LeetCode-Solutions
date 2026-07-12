class Solution {
public:
    bool checkTwoChessboards(string s1, string s2) {
        if((s1[0]-'a' + s1[1])%2==0){
            if((s2[0]-'a' +s2[1])%2==0)
            return true;
            else
            return false;
        }
        else{
            if((s2[0]-'a' +s2[1])%2==1)
            return true;
            else
            return false;
        }
        
    }
};