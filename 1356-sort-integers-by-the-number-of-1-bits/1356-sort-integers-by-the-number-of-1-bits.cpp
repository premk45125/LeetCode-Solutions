class Solution {
public:
    int bits(int n){
        if(n<=1)
        return n;
        else
        return bits(n&(n-1))+1;
        

        
    }
    vector<int> sortByBits(vector<int>& arr) {

        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(bits(a)==bits(b)){
                return a<b;

            }
            else
            return bits(a)<bits(b);
        });
        return arr;
        
    }
};