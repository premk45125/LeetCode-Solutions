class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char ch=coordinates[0];
        char dig=coordinates[1];
        if((ch-'a'+dig-'0')%2==0)
        return true;
        else
        return false;
        
    }
};