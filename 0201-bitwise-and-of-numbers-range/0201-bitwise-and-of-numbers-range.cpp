class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==0 || right==0)
        return 0;
        if(left==right)
        return left;
        int ans=0;
        int count=0;
        while(left>0 && right>0){
            left>>=1;
            right>>=1;
            count++;
            if(left==right)
            {
                ans=left;
                break;
            }

        }
        if(ans==0)
        return 0;
        while(count--){
            ans<<=1;
        }
        return ans;
        
    }
};