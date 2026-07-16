class Solution {
public:
    long long gcd(long long a, long long b) {
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        vector<int>maxele(n);
        maxele[0]=maxi;
        for(int i=1;i<n;i++){
            if(nums[i]>maxi)
            maxi=nums[i];
            maxele[i]=maxi;
        }
vector<int> prefixgcd(n);
for (int i = 0; i < n; i++) {
    prefixgcd[i] = gcd(nums[i], maxele[i]);
}     

    sort(prefixgcd.begin(),prefixgcd.end());

    long long sum=0;
    int i=0;
    int j=n-1;
    while(i<j){
        sum+=gcd(prefixgcd[i],prefixgcd[j]);
        i++;
        j--;
    }
    return sum;
    }
};