class Solution {
public:
    
    int maxLength(vector<int>& nums) {
        int maxi=1;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int hcf=nums[i];
            int lcm=nums[i];
            long long prod=nums[i];
            for(int j=i+1;j<n;j++){
                hcf=gcd(hcf,nums[j]);
                lcm=std::lcm(lcm,nums[j]);
                prod*=nums[j];
                if(prod==hcf*lcm){
                    maxi=max(maxi,j-i+1);
                }
                else
                break;
            }
        }
        return maxi;
        
    }
};