class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        vector<int>prefix(n,0);
        for(int i=0;i<n;i++){
            total+=nums[i];
            prefix[i]+=total;
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            int left=prefix[i];
            int right=total-left;
            if(abs(right-left)%2==0)
            count++;

        }
        return count;
        
    }
};