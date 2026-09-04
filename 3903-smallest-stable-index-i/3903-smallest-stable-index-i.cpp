class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxi(n,-1);
        maxi[0]=nums[0];
        for(int i=1;i<n;i++){
            maxi[i]=max(maxi[i-1],nums[i]);
        }
        vector<int>score(n);
        int mini=nums[n-1];
        score[n-1]=maxi[n-1]-mini;
        for(int i=n-2;i>=0;i--){
            mini=min(mini,nums[i]);
            score[i]=maxi[i]-mini;
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(score[i]<=k){
                idx=i;
                break;
            }
        }
        return idx;

        
    }
};