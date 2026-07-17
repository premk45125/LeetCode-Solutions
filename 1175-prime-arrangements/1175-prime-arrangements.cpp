class Solution {
public:
    long long const MOD=1000000007;
    long long factorial(int n){
        if(n==1||n==0)return 1;
        return (long long)n*factorial(n-1)%MOD;
    }
    bool isprime(int n){
        if(n<2)
        return false;
        for(int i=2;i<n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int numPrimeArrangements(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(isprime(i))
            count++;
        }
        return factorial(count)*factorial(n-count)%MOD;
        
    }
};