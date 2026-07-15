class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long sumodd=n*n;
        long long sumeven =n*(n+1);
        int ans=1;
        int mini=min(sumodd,sumeven);
        for(int i=mini;i>=1;i--){
            if(sumodd%i==0 && sumeven%i==0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};