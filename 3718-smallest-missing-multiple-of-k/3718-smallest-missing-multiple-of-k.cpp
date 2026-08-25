class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            if(nums[i]%k==0)
            s.insert(nums[i]);
        }

        int i=1;
        while(true){
            if(s.find(k*i)==s.end())
            return k*i;
            i++;
        }
        return k;
        
    }
};