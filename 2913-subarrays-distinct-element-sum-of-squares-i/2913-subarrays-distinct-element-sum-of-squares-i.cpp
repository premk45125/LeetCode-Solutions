class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int sum=0;

        for(int i=0;i<n;i++){
            map<int,int>freq;
            int count=0;

            for(int j=i;j<n;j++){
                if(freq.find(nums[j])==freq.end())
                {
                count++;
                freq[nums[j]]++;
                }                
                sum+=count*count;
                  
            }
            freq.clear();
        }
        return sum;
    }
};