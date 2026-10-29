class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count=0;
        // bool find=false;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int lcm=nums[i];
            if(nums[i]==k)
            count++;

            for(int j=i+1;j<n;j++){
                lcm=std::lcm(lcm,nums[j]);
                if(lcm==k)
                count++;
                else if(lcm>k)
                break;
            }

        }
        // if(find)
        // return count+1;
        // else
        return count;
    }
};