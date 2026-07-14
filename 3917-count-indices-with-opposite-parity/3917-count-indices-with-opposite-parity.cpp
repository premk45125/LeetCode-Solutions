class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>even(n,0);
        int count=0;
        for(int i=n-1;i>=0;i--){
            even[i]+=count;
            if(nums[i]%2==0)
            count++;
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            int rem=n-1-i;
            if(nums[i]%2==0)
            ans.push_back(rem-even[i]);
            else
            ans.push_back(even[i]);
        }
        return ans;
        
    }
};