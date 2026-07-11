class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        int maxi=-1;
        ans[n-1]=-1;
        if(arr[n-1]>maxi)
        maxi=arr[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]=maxi;
            if(arr[i]>maxi)
            maxi=arr[i];
        }
        return ans;
        
    }
};