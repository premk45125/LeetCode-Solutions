class Solution {
public:
    bool canAliceWin(int n) {
        bool flag=true;
        int req=10;
        while(req<=n){
            n=n-req;
            req--;
            if(flag)
            flag=false;
            else
            flag=true;
        }
        if(flag){
            return false;
        }
        else
        return true;;
        
    }
};