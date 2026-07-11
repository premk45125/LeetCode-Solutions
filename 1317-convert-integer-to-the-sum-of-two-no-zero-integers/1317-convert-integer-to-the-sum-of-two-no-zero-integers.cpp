class Solution {
public:
    bool isvalid(int n){
        while(n>0){
            int r=n%10;
            if(r==0)
            return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i=1;i<=n/2;i++){
            if(isvalid(i)&&isvalid(n-i)){
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
        }
        return ans;
        
    }
};