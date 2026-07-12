class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int singledig=0;
        int doubledig=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=9)
            singledig+=nums[i];
            else
            doubledig+=nums[i];
        }
        if(singledig==doubledig)
        return false;
        else return true;
        
    }
};