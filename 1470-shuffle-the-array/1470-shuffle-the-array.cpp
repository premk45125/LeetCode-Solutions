class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=nums.size();
        int l=0;
        int r=n;
        vector<int>ans;

        for(int i=0;i<size;i++){
            if(i%2==0){
                ans.push_back(nums[l]);
                l++;
            }
            else{
                ans.push_back(nums[r]);
                r++;
            }
        }
        return ans;
        
    }
};