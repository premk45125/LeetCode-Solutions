class Solution {
public:
    int ele(int times,int dig){
        int val=0;
        while(times){
            val=val*10+1;
            times--;
        }
        return val*dig;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int sum=0;

        for(int i=0;i<n;i++){
            if(nums[i]<=9)
            sum+=nums[i];
            else{
                int val=nums[i];
                int maxi=-1;
                int count=0;
                while(val){
                    int r=val%10;
                    count++;
                    maxi=max(r,maxi);
                    val/=10;

                }
                sum+=ele(count,maxi);
            }
        }
        return sum;
        
    }
};