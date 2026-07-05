class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        int maxall=INT_MIN;
        for(int i=0;i<n;i++){
            int val=nums[i];
            int mini=10;
            int maxi=-1;
            while(val>0){
                int r=val%10;
                if(r<mini)
                    mini=r;
                if(r>maxi)
                    maxi=r;
                val/=10;
            }
            v.push_back(maxi-mini);
            maxall=max(maxall,v.back());
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(v[i]==maxall){
                sum+=nums[i];
            }
        }
        return sum;
        
    }
};